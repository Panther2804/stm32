/*
 * Copyright (C) 2015 Freie Universität Berlin
 *
 * This file is subject to the terms and conditions of the GNU Lesser
 * General Public License v2.1. See the file LICENSE in the top level
 * directory for more details.
 */

/**
 * @ingroup     examples
 * @{
 *
 * @file
 * @brief       Example application for demonstrating the RIOT network stack
 *
 * @author      Hauke Petersen <hauke.petersen@fu-berlin.de>
 *
 * @}
 */

/**
 * @brief   Set default configuration parameters for the W5100 shield
 *
 * https://www.arduino.cc/en/Main/ArduinoEthernetShieldV1
 *
 * ArduinoUNO/F401 Pin#	SPI				Meaning					Remark
 * --------------------------------------------------------------------------------
 *  2/PA_10								Interrupt/Event			Solder jumper must be
 * 																connected for RIOT!
 *  4/PB_5				-CS1			Select miniSD slot		Must always be High
 *										(Low = Selected) !
 *	4/PA_4 ???? (periph_conf.h)
 * 10/PB_6				-CS0 SPI1		Select W5100			Must always be Low
 *										(Low = Selected) !
 * 11/PA_7				MOSI SPI1
 * 12/PA_6				MISO SPI1
 * 13/PA_5				SCLK SPI1
 */

// https://riot-os.org/api/group__drivers__periph__gpio.html
#define W5100_PARAM_SPI			(SPI_DEV(0)) 			// ???
#define W5100_PARAM_SPI_CLK		(SPI_CLK_5MHZ)

#define W5100_PARAM_CS			(GPIO_PIN(PORT_B, 6))	// PB_6
// #define W5100_PARAM_CS			(GPIO_PIN(PORT_A, 4))	// PB_6

#define W5100_PARAM_EVT			(GPIO_PIN(PORT_A, 10))	// PA_10

#define MINI_SD					(GPIO_PIN(PORT_B, 5))	// PB_5

#include <stdio.h>
#include <periph/gpio.h>
#include <periph/spi.h>

#include "shell.h"
#include "msg.h"

#define MAIN_QUEUE_SIZE     (8)
static msg_t _main_msg_queue[MAIN_QUEUE_SIZE];

extern int udp_cmd(int argc, char **argv);

static const shell_command_t shell_commands[] = {
    { "udp", "send data over UDP and listen on UDP ports", udp_cmd },
    { NULL, NULL, NULL }
};

void init(void) {
	// init SPI
	spi_init(W5100_PARAM_SPI);
	// probably not needed
	// spi_init_pins(W5100_PARAM_SPI);
	int err = spi_init_cs(W5100_PARAM_SPI, W5100_PARAM_CS);
	if (err != SPI_OK) {
		puts("spi_init_cs failed!");
	}

	// MINI_SD is not selected (=High)
	err = gpio_init(MINI_SD, GPIO_OUT);
	if (err) {
		puts("gpio_init SD failed");
	}
	gpio_set(MINI_SD);

	// W5100_PARAM_CS should be selected (=Low)
	err = gpio_init(W5100_PARAM_CS, GPIO_OUT);
	if (err) {
		puts("gpio_init W5100 failed");
	}
	gpio_clear(W5100_PARAM_CS);
}

int main(void)
{
    puts("RIOT example application - press ENTER to continue");
    getc(stdin);

    init();
    puts("init complete - press ENTER to continue");
    getc(stdin);

    /* we need a message queue for the thread running the shell in order to
     * receive potentially fast incoming networking packets */
    msg_init_queue(_main_msg_queue, MAIN_QUEUE_SIZE);
    puts("RIOT network stack example application");

    /* start shell */
    puts("All up, running the shell now");
    char line_buf[SHELL_DEFAULT_BUFSIZE];
    shell_run(shell_commands, line_buf, SHELL_DEFAULT_BUFSIZE);

    /* should be never reached */
    return 0;
}
