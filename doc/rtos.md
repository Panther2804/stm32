# RTOS

https://www.osrtos.com/
https://en.m.wikipedia.org/wiki/Comparison_of_real-time_operating_systems
http://stm32discovery.nano-age.co.uk/stm32-resources-and-links/open-source-real-time-operating-systems-for-the-stm32-and-cortex-m3-mpus
http://www.ethernut.de/nutwiki/index.php/EmbeddedOsLinks

## FreeRTOS

http://www.freertos.org/FreeRTOS-for-STM32F4xx-Cortex-M4F-IAR.html
http://www.freertos.org/FreeRTOS-Plus/BSP_Solutions/st/index.html

### Features

Net
http://www.freertos.org/FreeRTOS-For-STM32-Connectivity-Line-With-WEB-Server-Example.html
http://www.freertos.org/FreeRTOS-Plus/FreeRTOS_Plus_TCP/index.html
http://www.freertos.org/FreeRTOS-Plus/FreeRTOS_Plus_UDP/FreeRTOS_Plus_UDP.shtml

## contiki

* http://www.contiki-os.org/
* http://www.contiki-os.org/start.html
* https://github.com/sics-iot/calipso/tree/master/contiki80211

* https://github.com/contiki-os/contiki/tree/master/platform/stm32nucleo-spirit1
* https://github.com/cmtsij/contiki-stm32

## embed.org

* https://developer.mbed.org
* https://developer.mbed.org/platforms/ST-Discovery-L476VG/
* https://docs.mbed.com/docs/mbed-os-handbook/en/latest/dev_tools/cli/
* https://developer.mbed.org/teams/ST/wiki/Matrix-of-tested-boards

### embed.org subprojects

* https://github.com/ARMmbed/pal
* https://github.com/ARMmbed/yotta
* https://connector.mbed.com/ (for security.h)

### embed.org examples

* https://docs.mbed.com/docs/mbed-os-handbook/en/latest/getting_started/blinky_cli/
* https://github.com/ARMmbed/example-asynch-spi
* https://developer.mbed.org/teams/mbed-os-examples/
* https://github.com/ARMmbed/mbed-os

## mongoose-os (JavaScript)

https://github.com/cesanta/mongoose-os
https://github.com/cesanta/mjs
https://mongoose-os.com/software.html
https://mongoose-os.com/docs/quickstart/setup.html

### Async

MJS (aka V7) has no async support
https://github.com/cesanta/v7/issues/552
http://tc39.github.io/ecmascript-asyncawait/
https://github.com/bluejava/zousan

But mongoose-os can use multiple threads
https://github.com/cesanta/mongoose/blob/dev/examples/multithreaded/multithreaded.c

#### Supported platforms

* esp8266
* esp32
* cc3200
* stm32 (planned) https://github.com/cesanta/mongoose-os/tree/master/fw/platforms/stm32

## NuttX

* http://www.nuttx.org
* http://www.nuttx.org/Documentation/NuttX.html
* https://bitbucket.org/nuttx/nuttx
* https://bitbucket.org/nuttx/apps
* http://nuttx.org/doku.php?id=documentation:userguide
* https://phreakuencies.gitlab.io/nuttx_book/

* http://nuttx.org/doku.php?id=wiki:howtos:waitinterrupt
* http://nuttx.org/doku.php?id=wiki:getting-started:stm32f4discovery_unix
* http://nuttx.org/doku.php?id=wiki:howtos:stm32-null-pointer
* http://nuttx.org/doku.php?id=wiki:howtos:stm32-ccm-alloc
* http://nuttx.org/doku.php?id=wiki:networking:testing

### Features

Topic: Posix, Apps

* Net https://bitbucket.org/nuttx/nuttx/src/fa2c7a694fbe76dfedf58935d9582afcfba2caa1/drivers/net/?at=master

### Build NuttX for STM32

clone nuttx and apps

cd tools/
./configure.sh stm32l476vg-disco/nsh
./configure.sh nucleo-f4x1re/f401-nsh

export PATH=/opt/stm32/ac6/SystemWorkbench/plugins/fr.ac6.mcu.externaltools.arm-none.linux64_1.13.1.201705091103/tools/compiler/bin:$PATH

make CROSSDEV=arm-none-eabi-

Result:
* nuttx
* nuttx.bin
* nuttx.hex
* nuttx.map

## Zephyr

https://www.zephyrproject.org/doc/application/application.html

#### Supported platforms

https://www.zephyrproject.org/doc/boards/boards.html

* Very many, mostly ARM-based
* STM32 (of course) <br/>
  https://www.zephyrproject.org/doc/boards/arm/nucleo_l476rg/doc/nucleol476rg.html
  
### Build Zephyr for STM32

https://www.zephyrproject.org/doc/getting_started/getting_started.html
https://www.zephyrproject.org/doc/boards/boards.html
https://www.zephyrproject.org/doc/boards/arm/nucleo_l476rg/doc/nucleol476rg.html

export GCCARMEMB_TOOLCHAIN_PATH="/opt/stm32/ac6/SystemWorkbench/plugins/fr.ac6.mcu.externaltools.arm-none.linux64_1.13.1.201705091103/tools/compiler"
export ZEPHYR_GCC_VARIANT=gccarmemb
unset ZEPHYR_SDK_INSTALL_DIR
source zephyr-env.sh

cd samples/hello_world
make BOARD=nucleo_l476rg

## riot-os

* http://riot-os.org/
* https://github.com/RIOT-OS/RIOT
* https://github.com/RIOT-OS/Tutorials/blob/master/README.md

* https://riot-os.org/api/group__net__gnrc.html
* https://github.com/RIOT-OS/RIOT/wiki/Model-for-the-network-stack

### Supported platforms

* https://github.com/RIOT-OS/RIOT/wiki/RIOT-Platforms

* many boards
* many stm32
  + https://github.com/RIOT-OS/RIOT/wiki/Board%3A-Nucleo-F334
  + https://github.com/RIOT-OS/RIOT/wiki/Board:-Nucleo-F401
  + https://github.com/RIOT-OS/RIOT/issues/6721

## tiny-os

https://github.com/tinyos/tinyos-main

#### Supported plattforms

http://tinyos.stanford.edu/tinyos-wiki/index.php/Platform_Hardware

* nothing interesting, except Lego Mind Storm

## ChibiOS RT/NIL

* http://chibios.org/dokuwiki/doku.php
* http://wiki.chibios.org/dokuwiki/doku.php?id=chibios:community:plans:external_ram
  
## ukos

http://ukos.ch/

### Supported platforms

* ARM Cortex M7, M4, M3: many STM32 boards
* micropython port

## cocoOS

http://www.cocoos.net/intro.html

## distortos

http://distortos.org/documentation/ (STM32)

### Supported platforms

* AVR
* MSP430
* STM32

