# STM32 Overview 

https://www.open-electronics.org/lets-code-with-stm32-nucleo/
https://www.mikrocontroller.net/articles/STM32
https://www.mikrocontroller.net/articles/STM32_f%C3%BCr_Einsteiger
http://www.mystm32.de/doku.php

## C Lang

https://www.tutorialspoint.com/cprogramming/
http://de.cppreference.com/w/

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
https://github.com/erwango/openocd-stm32.git

https://github.com/texane/stlink.git

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

##### Async

MJS (aka V7) has no async support
https://github.com/cesanta/v7/issues/552
http://tc39.github.io/ecmascript-asyncawait/
https://github.com/bluejava/zousan

But mongoose-os can use multiple threads
https://github.com/cesanta/mongoose/blob/dev/examples/multithreaded/multithreaded.c

###### Supported Plattforms

* esp8266
* esp32
* cc3200
* stm32 (planned) https://github.com/cesanta/mongoose-os/tree/master/fw/platforms/stm32

#### NuttX

http://www.nuttx.org
https://bitbucket.org/nuttx/nuttx
https://bitbucket.org/nuttx/apps

##### Build NuttX for STM32

clone nuttx and apps

cd tools/
 ./configure.sh stm32l476vg-disco/nsh

export PATH=/opt/stm32/ac6/SystemWorkbench/plugins/fr.ac6.mcu.externaltools.arm-none.linux64_1.13.1.201705091103/tools/compiler/bin:$PATH

make CROSSDEV=arm-none-eabi-

Result:
* nuttx
* nuttx.bin
* nuttx.hex
* nuttx.map

#### Zephyr

###### Supported Plattforms

https://www.zephyrproject.org/doc/boards/boards.html

* Very many, mostly ARM-based
* STM32 (of course) <br/>
  https://www.zephyrproject.org/doc/boards/arm/nucleo_l476rg/doc/nucleol476rg.html
  
##### Build Zephyr for STM32

https://www.zephyrproject.org/doc/getting_started/getting_started.html
https://www.zephyrproject.org/doc/boards/boards.html
https://www.zephyrproject.org/doc/boards/arm/nucleo_l476rg/doc/nucleol476rg.html

export GCCARMEMB_TOOLCHAIN_PATH="/opt/stm32/ac6/SystemWorkbench/plugins/fr.ac6.mcu.externaltools.arm-none.linux64_1.13.1.201705091103/tools/compiler"
export ZEPHYR_GCC_VARIANT=gccarmemb
unset ZEPHYR_SDK_INSTALL_DIR
source zephyr-env.sh

cd samples/hello_world
make BOARD=nucleo_l476rg
  
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
http://docs.micropython.org/en/latest/wipy/reference/constrained.html
http://docs.micropython.org/en/latest/wipy/reference/speed_python.html

##### Pycom.io

https://docs.pycom.io/pycom_esp32/pycom_esp32/getstarted.html
https://docs.pycom.io/pycom_esp32/pycom_esp32/toolsandfeatures.html

https://www.pycom.io/development-boards
https://en.m.wikipedia.org/wiki/ESP32

https://www.pycom.io/software/
https://www.pycom.io/pybytes/

#### Async

Thread support
https://docs.pycom.io/pycom_esp32/pycom_esp32/tutorial/includes/threading.html
https://forum.micropython.org/viewtopic.php?t=1864

Garbage Collector is multithread-enabled
https://www.pycom.io/qa-micropython-multi-threading-garbage-collector/

Writing of ISR is possible
http://docs.micropython.org/en/latest/wipy/reference/isr_rules.html
https://github.com/micropython/micropython/issues/1275

Extension for async/await is available
https://github.com/peterhinch/micropython-async
https://forum.micropython.org/viewtopic.php?t=2876

##### Supported Plattforms

https://github.com/micropython/micropython/wiki
https://github.com/micropython/micropython/wiki/Boards-Summary

* pyboards
* STM32 https://github.com/micropython/micropython
* zephyr https://github.com/micropython/micropython/tree/master/zephyr
* nuttx (?) https://bitbucket.org/nuttx/apps/src/f3dc5bea136e39134d3961f27101da423052356b/interpreters/?at=master <br/>
  wint_t Problem: http://www.cplusplus.com/reference/cwchar/wint_t/
* http://ukos.ch/

##### Building micropython/stmhal

The "stmhal" port requires an ARM compiler, arm-none-eabi-gcc, and associated bin-utils. For those using Arch Linux, you need arm-none-eabi-binutils and arm-none-eabi-gcc packages. Otherwise, try here: https://launchpad.net/gcc-arm-embedded

To build:

$ cd stmhal
$ make

You then need to get your board into DFU mode. On the pyboard, connect the 3V3 pin to the P1/DFU pin with a wire (on PYBv1.0 they are next to each other on the bottom left of the board, second row from the bottom).

Then to flash the code via USB DFU to your device:

$ make deploy

This will use the included tools/pydfu.py script. If flashing the firmware does not work it may be because you don't have the correct permissions, and need to use sudo make deploy. See the README.md file in the stmhal/ directory for further details.

###### Building micropython/zephyr

Checkout Zephyr in the same parent directory.

Build Zephyr demo (e.g. samples/hello_world)

cd ../micropython/zephyr

make BOARD=nucleo_l476rg

##### Extending

http://micropython-dev-docs.readthedocs.io/en/latest/adding-module.html
https://forum.micropython.org/viewtopic.php?t=530

###### Supported Plattforms

https://github.com/micropython/micropython/wiki/Boards-Summary

* pyboards
* some STM32 https://github.com/micropython/micropython/tree/master/stmhal
* many others

#### Lua/eLua

http://www.eluaproject.net/overview/why-lua
http://www.eluaproject.net/doc/v0.9/en_arch_ltr.html

##### Supported Plattforms

http://wiki.eluaproject.net/Boards

* many, and also many ARM Cortex M3, M4
* STM32F4DISCOVERY
* Mini STM32 STM32F103 TFT LCD Board V3 (with TFT touch screen for ~US$50) 

##### Async

Event Loop based (Cooperative MT)
http://elua-development.2368040.n2.nabble.com/eLua-vs-Lua-on-RTOS-td5959889.html

Interpreter is not reentrantable
https://stackoverflow.com/questions/8816386/is-it-okay-calling-lua-function-from-different-threadembedding-lua-in-c

Extension for coroutines is available (but hardly used)
http://elua-development.2368040.n2.nabble.com/Pure-Lua-multitasking-with-eLua-td7578258.html
https://github.com/xopxe/eLumen
https://github.com/xopxe/Lumen

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

http://diller-technologies.de/stm32.html (FEATURED!)
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

#### USB

https://hackaday.io/project/3579-12-mbps-communication-link-between-pc-and-mcu
https://electronics.stackexchange.com/questions/61850/stm32-pc-serial-communication
https://stackoverflow.com/questions/30602485/uart-over-usb-for-stm32-micro-controller
http://www.linux-usb.org/usbnet/

##### USB Host

https://visualgdb.com/tutorials/arm/stm32/usb/
http://www.st.com/content/ccc/resource/technical/document/user_manual/b8/5a/28/c2/cf/b6/47/d6/DM00105256.pdf/files/DM00105256.pdf/jcr:content/translations/en.DM00105256.pdfhttp://www.st.com/content/ccc/resource/technical/document/user_manual/b8/5a/28/c2/cf/b6/47/d6/DM00105256.pdf/files/DM00105256.pdf/jcr:content/translations/en.DM00105256.pdf

Classes
* Mass-Storage
* HID (mouse & keyboard)
* Audio
* CDC virtual COM
* MTP (Media transfer)

#### USB Device

http://www.st.com/content/ccc/resource/technical/document/user_manual/cf/38/e5/b5/dd/1d/4c/09/DM00108129.pdf/files/DM00108129.pdf/jcr:content/translations/en.DM00108129.pdf

Classes
* HID (mouse & keyboard)
* Audio
* CDC virtual COM
* Mass-Storage
* DFU Device Firmware Upgrade
* Dual (Multi) Core (aka Classes)

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

http://www.runeaudio.com/about/ (CPU)

#### Autopilot

http://px4.io/
https://github.com/PX4

#### GUI

http://mikrocontroller.bplaced.net/wordpress/?page_id=3195

#### Drehgeber/Quadraturencoder

https://www.mikrocontroller.net/articles/Drehgeber

### IoT

#### Iot RF

http://www.st.com/content/st_com/en/products/wireless-connectivity/sub-1ghz-rf.html
https://de.m.wikipedia.org/wiki/Sigfox
