# STM32 Overview 

https://www.open-electronics.org/lets-code-with-stm32-nucleo/
https://www.mikrocontroller.net/articles/STM32

## Hardware Overview

### STM32 Overview


### Debugger Hardware

#### JTAG based

http://www.coocox.org/hardware/colinkex.php
http://www.coocox.org/wiki/coocox/CoLinkEx/CoLinkEx-User-Guide
http://www.coocox.org/wiki/coocox/Buy/Buy-from-distributor

http://www.openjtag.org/index.php (old)

https://www.segger.com/products/debug-probes/j-link/models/j-link-edu/
https://www.segger.com/products/debug-probes/j-link/models/j-link-base/

## PC Software Overview

### IDEs

#### Cross-plattform

http://www.openstm32.org/HomePage

http://www.coocox.org/software/coide.php

http://www.emcu.eu/2017/03/13/how-to-use-stm32-and-arduino-ide/

### Toolchains

#### Debugger and Flashing Software

http://openocd.org/

#### Other Software

http://ymorin.is-a-geek.org/projects/kconfig-frontends
http://ymorin.is-a-geek.org/git/kconfig-frontends/

https://stackoverflow.com/questions/26961795/converting-from-hex-to-bin-for-arm-on-linux


## MCU STM32 Software Overview

### HAL Layers

### Drivers

http://libopencm3.org/
https://github.com/libopencm3/libopencm3
https://github.com/libopencm3/libopencm3/wiki

http://www.coocox.org/code/

### Bootloader

https://github.com/BitThunder/bootthunder

### RTOS

https://www.osrtos.com/
https://en.m.wikipedia.org/wiki/Comparison_of_real-time_operating_systems
http://stm32discovery.nano-age.co.uk/stm32-resources-and-links/open-source-real-time-operating-systems-for-the-stm32-and-cortex-m3-mpus

#### FreeRTOS

#### contiki

http://www.contiki-os.org/
https://github.com/contiki-os/contiki/tree/master/platform/stm32nucleo-spirit1
https://github.com/cmtsij/contiki-stm32

#### embed.org

https://developer.mbed.org
https://developer.mbed.org/platforms/ST-Discovery-L476VG/
https://docs.mbed.com/docs/mbed-os-handbook/en/latest/dev_tools/cli/
https://docs.mbed.com/docs/mbed-os-handbook/en/latest/getting_started/blinky_cli/

#### mongoose-os (JavaScript)

https://github.com/cesanta/mongoose-os
https://github.com/cesanta/mjs
https://mongoose-os.com/software.html
https://mongoose-os.com/docs/quickstart/setup.html

###### Supported Plattforms

* esp8266
* esp32
* cc3200
* stm32 (planned) https://github.com/cesanta/mongoose-os/tree/master/fw/platforms/stm32

#### NuttX

http://www.nuttx.org
https://bitbucket.org/nuttx/nuttx
https://bitbucket.org/nuttx/apps

#### Zephyr

###### Supported Plattforms

https://www.zephyrproject.org/doc/boards/boards.html

* Very many, mostly ARM-based
* STM32 (of course) <br/>
  https://www.zephyrproject.org/doc/boards/arm/nucleo_l476rg/doc/nucleol476rg.html
  
#### ukos

http://ukos.ch/

##### Supported Plattforms

* ARM Cortex M7, M4, M3: many STM32 boards
* micropython port

#### cocoOS

http://www.cocoos.net/intro.html

#### distortos

http://distortos.org/documentation/ (STM32)

##### Supported Plattforms

* AVR
* MSP430
* STM32

### Interpreter

#### JavaScript

##### Samsung: IoT.js and JerryScript

http://iotjs.net/
https://github.com/Samsung/iotjs
http://jerryscript.net/

###### Supported Plattforms

https://github.com/Samsung/iotjs/blob/master/docs/help/Getting-Started.md

* Linux (Ubuntu)
* NuttX
* Raspberry Pi 2
* STM32 (planned)

#### Python

https://micropython.org/
https://github.com/micropython/micropython

##### Supported Plattforms

https://github.com/micropython/micropython/wiki
https://github.com/micropython/micropython/wiki/Boards-Summary

* pyboards
* STM32 https://github.com/micropython/micropython
* zephyr https://github.com/micropython/micropython/tree/master/zephyr
* nuttx (?) https://bitbucket.org/nuttx/apps/src/f3dc5bea136e39134d3961f27101da423052356b/interpreters/?at=master <br/>
  wint_t Problem: http://www.cplusplus.com/reference/cwchar/wint_t/
* http://ukos.ch/

##### Extending

http://micropython-dev-docs.readthedocs.io/en/latest/adding-module.html
https://forum.micropython.org/viewtopic.php?t=530

###### Supported Plattforms

https://github.com/micropython/micropython/wiki/Boards-Summary

* pyboards
* some STM32 https://github.com/micropython/micropython/tree/master/stmhal
* many others

#### Lua

#### Other

### GUI

#### STemWin

http://mikrocontroller.bplaced.net/wordpress/?page_id=3191
http://www.emcu.it/STemWin/STemWin.html

### STM32 Programming

https://stm32f4-discovery.net/
http://fab.cba.mit.edu/classes/863.13/tutorials/EmbeddedProgramming/stm32.html
http://www.st.com/content/st_com/en/support/learning/stm32-education.html

http://www.st.com/content/ccc/resource/technical/document/user_manual/2d/60/ff/15/8c/c9/43/77/DM00105262.pdf/files/DM00105262.pdf/jcr:content/translations/en.DM00105262.pdf

https://visualgdb.com/tutorials/arm/stm32
https://visualgdb.com/w/tutorials/category/tutorials/embedded/stm32_periph/
https://visualgdb.com/w/tutorials/category/tutorials/embedded/stm32_tools/

https://learn.adafruit.com/dash-hacking-bare-metal-stm32-programming/programming

#### Old BUT RECOMMENDED

https://www.mikrocontroller.net/articles/STM32F10x_Standard_Peripherals_Library

#### Interrupts

https://stm32f4-discovery.net/2014/08/stm32f4-external-interrupts-tutorial/
http://letanphuc.net/2015/03/stm32f0-tutorial-3-external-interrupts/
http://embedded-lab.com/blog/stm32-external-interrupt/

#### Timers

https://visualgdb.com/tutorials/arm/stm32/timers/hal/

#### ADC

https://visualgdb.com/tutorials/arm/stm32/adc/

#### UART and Serial

http://www.carminenoviello.com/2015/03/02/how-to-use-stm32-nucleo-serial-port/
https://developer.mbed.org/teams/ST-Americas-mbed-Team/wiki/Creating-Console-Output

#### Avanced Problems

https://community.st.com/thread/36017-mutual-exclusion-for-hal-using-freertos

### Full OS

#### Linux

http://www.uclinux.org/
https://www.mikrocontroller.net/articles/Linux_auf_STM32
http://www.emcraft.com/stm32f7-discovery-board/using-stm32-uart-ports-in-linux

#### BSD

https://github.com/sergev/LiteBSD/wiki (PIC32 only)
http://retrobsd.org/wiki/doku.php (some boards, non STM32 or ARM)

#### Libc Implementations

https://sourceware.org/newlib/
https://uclibc.org/about.html

### Using in conjunction with a real CPU board (mostly robotics)

http://hybridgroup.com/
http://artoo.io/ (Ruby)
https://cylonjs.com/ (JavaScript)
https://gobot.io/ (Go Lang)
http://gort.io/

### STM32 Projects

#### Autopilot

http://px4.io/
https://github.com/PX4

#### GUI

http://mikrocontroller.bplaced.net/wordpress/?page_id=3195

### IoT

#### Iot RF

http://www.st.com/content/st_com/en/products/wireless-connectivity/sub-1ghz-rf.html

