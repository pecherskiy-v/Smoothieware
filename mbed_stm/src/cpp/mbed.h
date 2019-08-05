/* mbed Microcontroller Library
 * Copyright (c) 2006-2013 ARM Limited
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */
#ifndef MBED_H
#define MBED_H

#include "mbed_version.h"

#if MBED_CONF_RTOS_PRESENT
#include "rtos/rtos.h"
#endif

#if MBED_CONF_NSAPI_PRESENT
#include "netsocket/nsapi.h"
#include "netsocket/nsapi_ppp.h"
#endif

#if MBED_CONF_EVENTS_PRESENT
#include "events/mbed_events.h"
#endif

#if MBED_CONF_FILESYSTEM_PRESENT
#include "filesystem/mbed_filesystem.h"
#endif

#include "mbed_toolchain.h"
#include "platform.h"
#include "mbed_application.h"

// Useful C libraries
#include <math.h>
#include <time.h>

// mbed Debug libraries
#include "mbed_error.h"
#include "mbed_interface.h"
#include "mbed_assert.h"
#include "mbed_debug.h"

// mbed Peripheral components
#include "DigitalIn.h"
#include "DigitalOut.h"
#include "DigitalInOut.h"
#include "BusIn.h"
#include "BusOut.h"
#include "BusInOut.h"
#include "PortIn.h"
#include "PortInOut.h"
#include "PortOut.h"
#include "AnalogIn.h"
#include "AnalogOut.h"
#include "PwmOut.h"
#include "Serial.h"
#include "SPI.h"
#include "SPISlave.h"
#include "I2C.h"
#include "I2CSlave.h"
#include "Ethernet.h"
#include "CAN.h"
//#include "drivers/RawSerial.h"
#include "UARTSerial.h"
//#include "drivers/FlashIAP.h"
//#include "drivers/MbedCRC.h"
#include "QSPI.h"
#include "Watchdog.h"

// mbed Internal components
//#include "drivers/ResetReason.h"
#include "Timer.h"
#include "Ticker.h"
#include "Timeout.h"
//#include "drivers/LowPowerTimeout.h"
//#include "drivers/LowPowerTicker.h"
//#include "drivers/LowPowerTimer.h"
#include "LocalFileSystem.h"
#include "InterruptIn.h"
#include "mbed_wait_api.h"
#include "sleep_api.h"
#include "mbed_atomic.h"
#include "mbed_power_mgmt.h"
#include "mbed_rtc_time.h"
#include "mbed_poll.h"
//#include "../platform/ATCmdParser.h"
#include "FileSystemHandle.h"
#include "FileHandle.h"
#include "DirHandle.h"
//#include "../platform/CriticalSectionLock.h"
//#include "../platform/DeepSleepLock.h"
//#include "../platform/ScopedRomWriteLock.h"
//#include "../platform/ScopedRamExecutionLock.h"
#include "mbed_stats.h"

// mbed Non-hardware components
#include "Callback.h"
#include "FunctionPointer.h"
//#include "../platform/ScopedLock.h"

#ifndef MBED_NO_GLOBAL_USING_DIRECTIVE
using namespace mbed;
using namespace std;
#endif

#endif
