# STM32 Overview 

https://www.open-electronics.org/lets-code-with-stm32-nucleo/
https://www.mikrocontroller.net/articles/STM32
https://www.mikrocontroller.net/articles/STM32_f%C3%BCr_Einsteiger
http://www.mystm32.de/doku.php

## C Lang

https://www.tutorialspoint.com/cprogramming/
http://de.cppreference.com/w/

### Async

http://actortos.blogspot.ch/2015/02/actors-for-embedded-systems-and-rtos.html
https://gist.github.com/Geal/8f85e02561d101decf9a (C Futures)
https://en.m.wikipedia.org/wiki/QP_(framework)
http://www.erlang-embedded.com/

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

http://viewtool.com/index.php/en/

## PC Software Overview

### IDEs

#### Cross-plattform

http://www.openstm32.org/HomePage

Important fix for Linux
* Fedora (25): You need the following fake link: /lib/libncurses.so.5 -> /lib/libncurses.so.6
* Ubuntu (17.04): You need to install the x86 libncurses lib

http://www.coocox.org/software/coide.php

http://www.emcu.eu/2017/03/13/how-to-use-stm32-and-arduino-ide/

Important fix for Linux
* The st-flash app that comes with the port is to old, you have to replace it <br/>
  .arduino15/packages/STM32/tools/STM32Tools/2017.1.19/tools/linux64/stlink/st-flash <br/>
  .arduino15/packages/STM32/tools/STM32Tools/2017.5.12/tools/linux64/stlink/st-flash

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

* Qube from STM

http://chibios.org/dokuwiki/doku.php?id=chibios:product:hal:start

### Drivers

* STM32F4x7 beinhalten wired TCP/IP

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
http://www.ethernut.de/nutwiki/index.php/EmbeddedOsLinks

#### FreeRTOS

http://www.freertos.org/FreeRTOS-for-STM32F4xx-Cortex-M4F-IAR.html
http://www.freertos.org/FreeRTOS-Plus/BSP_Solutions/st/index.html

##### Features

Net
http://www.freertos.org/FreeRTOS-For-STM32-Connectivity-Line-With-WEB-Server-Example.html
http://www.freertos.org/FreeRTOS-Plus/FreeRTOS_Plus_TCP/index.html
http://www.freertos.org/FreeRTOS-Plus/FreeRTOS_Plus_UDP/FreeRTOS_Plus_UDP.shtml

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

###### Supported platforms

* esp8266
* esp32
* cc3200
* stm32 (planned) https://github.com/cesanta/mongoose-os/tree/master/fw/platforms/stm32

#### NuttX

http://www.nuttx.org
http://www.nuttx.org/Documentation/NuttX.html
https://bitbucket.org/nuttx/nuttx
https://bitbucket.org/nuttx/apps
http://nuttx.org/doku.php?id=documentation:userguide

http://nuttx.org/doku.php?id=wiki:howtos:waitinterrupt

##### Features

Topic: Posix, Apps

* Net https://bitbucket.org/nuttx/nuttx/src/fa2c7a694fbe76dfedf58935d9582afcfba2caa1/drivers/net/?at=master

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

https://www.zephyrproject.org/doc/application/application.html

###### Supported platforms

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

#### riot-os

http://riot-os.org/
https://github.com/RIOT-OS/RIOT

##### Supported platforms

https://github.com/RIOT-OS/RIOT/wiki/RIOT-Platforms

* many boards
* many stm32

#### tiny-os

https://github.com/tinyos/tinyos-main

###### Supported plattforms

http://tinyos.stanford.edu/tinyos-wiki/index.php/Platform_Hardware

* nothing interesting, except Lego Mind Storm

#### ChibiOS RT/NIL

http://chibios.org/dokuwiki/doku.php
  
#### ukos

http://ukos.ch/

##### Supported platforms

* ARM Cortex M7, M4, M3: many STM32 boards
* micropython port

#### cocoOS

http://www.cocoos.net/intro.html

#### distortos

http://distortos.org/documentation/ (STM32)

##### Supported platforms

* AVR
* MSP430
* STM32

### Interpreter

#### JavaScript

##### Samsung: IoT.js and JerryScript

http://iotjs.net/
https://github.com/Samsung/iotjs
http://jerryscript.net/

###### Supported platforms

https://github.com/Samsung/iotjs/blob/master/docs/help/Getting-Started.md

* Linux (Ubuntu)
* NuttX
* Raspberry Pi 2
* STM32 (planned)

##### Espruino

http://www.espruino.com/
https://github.com/espruino/Espruino
http://www.espruino.com/Modules

##### Supported platforms

http://jeelabs.org/book/1548e/index.html (STM32)

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

##### Supported platforms

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

###### Supported platforms

https://github.com/micropython/micropython/wiki/Boards-Summary

* pyboards
* some STM32 https://github.com/micropython/micropython/tree/master/stmhal
* many others

#### Lua/eLua

http://www.eluaproject.net/overview/why-lua
http://www.eluaproject.net/doc/v0.9/en_arch_ltr.html

##### Building elua/stm32

http://www.eluaproject.net/doc/master/en_building.html
http://www.eluaproject.net/doc/master/en_configurator.html
http://wiki.eluaproject.net/STM32F103
http://wiki.eluaproject.net/STM32F4DISCOVERY

Install lua and luarocks

sudo luarocks install luafilesystem
sudo luarocks install md5

cp boards/known/stm32f4discovery.lua boards/custom/

kate boards/custom/stm32f4discovery.lua

lua build_elua.lua board=stm32f4discovery

BUILD FAILS, because of 

lua: ./utils/mkfs.lua:4: module 'pack' not found:
        no field package.preload['pack']
        no file '/usr/share/lua/5.3/pack.lua'
        no file '/usr/share/lua/5.3/pack/init.lua'
        no file '/usr/lib64/lua/5.3/pack.lua'
        no file '/usr/lib64/lua/5.3/pack/init.lua'
        no file './pack.lua'
        no file './pack/init.lua'
        no file '/usr/lib64/lua/5.3/pack.so'
        no file '/usr/lib64/lua/5.3/loadall.so'
        no file './pack.so'
        
It seems to need lua-5.1!
http://lua-users.org/lists/lua-l/2015-03/msg00170.html

SOLUTION

* Edit utils/mkfs.lua and comment out 'require("pack")' with '--'

##### Supported platforms

http://wiki.eluaproject.net/Boards

* many, and also many ARM Cortex M3, M4
* STM32F4DISCOVERY
* Mini STM32 STM32F103 TFT LCD Board V3 (with TFT touch screen for ~US$50) 

##### Async

Event Loop based (Cooperative MT)
http://elua-development.2368040.n2.nabble.com/eLua-vs-Lua-on-RTOS-td5959889.html

Interrupts
http://www.eluaproject.net/doc/v0.9/en_inthandlers.html

Interpreter is not reentrantable
https://stackoverflow.com/questions/8816386/is-it-okay-calling-lua-function-from-different-threadembedding-lua-in-c

Extension for coroutines is available (but hardly used)
http://elua-development.2368040.n2.nabble.com/Pure-Lua-multitasking-with-eLua-td7578258.html
https://github.com/xopxe/eLumen
https://github.com/xopxe/Lumen

RTOS integration (not wanted!)
http://elua-development.2368040.n2.nabble.com/eLua-and-RTOS-integration-td2421909.html
https://github.com/linvinus/chibios_with_elua

#### Other

### GUI

#### STemWin

http://mikrocontroller.bplaced.net/wordpress/?page_id=3191
http://www.emcu.it/STemWin/STemWin.html

#### NX (nuttx)

http://nuttx.org/Documentation/NxWidgets.html
http://nuttx.org/Documentation/NXGraphicsSubsystem.html

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

### IoT

https://github.com/AoLab/awesome-iot-1
https://github.com/Agile-IoT/awesome-open-iot

#### Iot RF

http://www.st.com/content/st_com/en/products/wireless-connectivity/sub-1ghz-rf.html
https://de.m.wikipedia.org/wiki/Sigfox

#### IoT TCP/IP

##### Stacks

http://www.nongnu.org/lwip/2_0_x/index.html
http://lwip.wikia.com/wiki/ARP

https://www.oryx-embedded.com/cyclone_tcp.html

http://www.microchip.com/SWLibraryWeb/product.aspx?product=TCPIPSTACK
https://github.com/x893/Microchip/blob/master/TCPIP/Demo%20App%20MDD%20STM32/MainDemo.c

* nuttx
* riot
* contiki

#### Projects

https://balau82.wordpress.com/2015/12/07/dhcp-client-on-stm32-nucleo-and-w5100/
http://mikrocontroller.bplaced.net/wordpress/?page_id=2434
https://www.mikrocontroller.net/topic/296181

http://acme.com/software/thttpd/

#### wired

#### wireless

nRF24L01
* nuttx 

W5100
* STM32 bare metal https://www.mikrocontroller.net/topic/363765 <br/>
  https://github.com/cnoviello/stm32-w5100
* Riot http://riot-os.org/api/group__drivers__w5100.html


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

