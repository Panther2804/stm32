# STM32 Overview 

* https://www.open-electronics.org/lets-code-with-stm32-nucleo/
* https://www.mikrocontroller.net/articles/STM32
* https://www.mikrocontroller.net/articles/STM32_f%C3%BCr_Einsteiger
* http://www.mystm32.de/doku.php
* https://stackoverflow.com/questions/tagged/stm32

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

http://www.coocox.org/hardware/colinkex.php (Windows only)
http://www.coocox.org/wiki/coocox/CoLinkEx/CoLinkEx-User-Guide
http://www.coocox.org/wiki/coocox/Buy/Buy-from-distributor

http://www.openjtag.org/index.php (old)

https://www.segger.com/products/debug-probes/j-link/models/j-link-edu/
https://www.segger.com/products/debug-probes/j-link/models/j-link-base/

http://viewtool.com/index.php/en/

#### Serial Console

* https://unix.stackexchange.com/questions/283924/how-can-minicom-permanently-translate-incoming-newline-n-to-crlf

## PC Software Overview

### IDEs

* http://www.emcu.it/STM32/What_should_I_use_to_develop_on_STM32/What_should_I_use_to_develop_on_STM32.html

#### Cross-plattform

#### Eclipse based

* http://www.emcu.it/STM32/What_should_I_use_to_develop_on_STM32/What_should_I_use_to_develop_on_STM32.html
* http://www.emcu.it/STM32/What_should_I_use_to_develop_on_STM32/stm32f0_linux_dvlpt.pdf

##### AC6 (openstm32)

* http://www.openstm32.org/HomePage

Important fix for Linux
* Fedora (25): You need the following fake link: /lib/libncurses.so.5 -> /lib/libncurses.so.6
* Ubuntu (17.04): You need to install the x86 libncurses lib

##### Arduino IDE

* http://www.emcu.eu/2017/03/13/how-to-use-stm32-and-arduino-ide/

Important fix for Linux
* The st-flash app that comes with the port is to old, you have to replace it <br/>
  .arduino15/packages/STM32/tools/STM32Tools/2017.1.19/tools/linux64/stlink/st-flash <br/>
  .arduino15/packages/STM32/tools/STM32Tools/2017.5.12/tools/linux64/stlink/st-flash

##### PlatformIO IDE

* http://platformio.org/platformio-ide

#### Restricted (to one OS)

* http://www.coocox.org/software/coide.php (windows)

### Toolchains

* http://platformio.org/get-started

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

* https://micropython.org/
* https://github.com/micropython/micropython
* http://docs.micropython.org/en/latest/wipy/reference/constrained.html
* http://docs.micropython.org/en/latest/wipy/reference/speed_python.html
* https://lwn.net/Articles/648051/
* https://lwn.net/Articles/723418/

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

#### Projects

http://mikrocontroller.bplaced.net/wordpress/?page_id=2434
https://www.mikrocontroller.net/topic/296181

http://acme.com/software/thttpd/

#### wired

#### wireless

nRF24L01
* nuttx 

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

* http://www.runeaudio.com/about/ (CPU)
* http://mikrocontroller.bplaced.net/wordpress/

#### Autopilot

http://px4.io/
https://github.com/PX4

#### GUI

http://mikrocontroller.bplaced.net/wordpress/?page_id=3195

#### Drehgeber/Quadraturencoder

https://www.mikrocontroller.net/articles/Drehgeber

