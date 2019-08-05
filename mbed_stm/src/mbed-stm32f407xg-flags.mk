#C_FLAFS
C_FLAGS += -std=gnu11
C_FLAGS += -include
C_FLAGS += mbed_config.h
C_FLAGS += -DBIGTREETECH_SKR_PRO
C_FLAGS += -DDEVICE_SPISLAVE=1
C_FLAGS += -DDEVICE_EMAC=1
C_FLAGS += -D__MBED__=1
C_FLAGS += -DDEVICE_I2CSLAVE=1
C_FLAGS += -D__FPU_PRESENT=1
C_FLAGS += -DDEVICE_PORTOUT=1
C_FLAGS += -DDEVICE_PORTINOUT=1
C_FLAGS += -DTARGET_STM32F407xx
C_FLAGS += -DMBED_BUILD_TIMESTAMP=1564848461.06
C_FLAGS += -DTARGET_STM32F4
C_FLAGS += -D__CMSIS_RTOS
C_FLAGS += -DDEVICE_WATCHDOG=1
C_FLAGS += -DTOOLCHAIN_GCC
C_FLAGS += -DDEVICE_I2C_ASYNCH=1
C_FLAGS += -DTARGET_STM32F407xG
C_FLAGS += -DTARGET_CORTEX_M
C_FLAGS += -DTARGET_LIKE_CORTEX_M4
C_FLAGS += -DDEVICE_ANALOGOUT=1
C_FLAGS += -DTARGET_M4
C_FLAGS += -DDEVICE_ANALOGIN=1
C_FLAGS += -DCOMPONENT_PSA_SRV_IMPL=1
C_FLAGS += -DDEVICE_SPI_ASYNCH=1
C_FLAGS += -DDEVICE_PWMOUT=1
C_FLAGS += -DUSE_FULL_LL_DRIVER
C_FLAGS += -DTARGET_CORTEX
C_FLAGS += -DDEVICE_I2C=1
C_FLAGS += -DTRANSACTION_QUEUE_SIZE_SPI=2
C_FLAGS += -D__CORTEX_M4
C_FLAGS += -DDEVICE_STDIO_MESSAGES=1
C_FLAGS += -DTARGET_FAMILY_STM32
C_FLAGS += -DUSE_HAL_DRIVER
#C_FLAGS += -DTARGET_FF_ARDUINO
C_FLAGS += -DDEVICE_PORTIN=1
C_FLAGS += -DTARGET_RELEASE
C_FLAGS += -DTARGET_STM
C_FLAGS += -DTARGET_STM32F407
C_FLAGS += -DCOMPONENT_PSA_SRV_EMUL=1
C_FLAGS += -DDEVICE_USTICKER=1
C_FLAGS += -DTARGET_STM32F407ZG
C_FLAGS += -DDEVICE_TRNG=1
C_FLAGS += -DTARGET_LIKE_MBED
#C_FLAGS += -D__MBED_CMSIS_RTOS_CM
C_FLAGS += -DDEVICE_SLEEP=1
C_FLAGS += -DTOOLCHAIN_GCC_ARM
C_FLAGS += -DDEVICE_RESET_REASON=1
C_FLAGS += -DDEVICE_SPI=1
C_FLAGS += -DUSB_STM_HAL
C_FLAGS += -DCOMPONENT_NSPE=1
C_FLAGS += -DDEVICE_INTERRUPTIN=1
C_FLAGS += -DDEVICE_RTC=1
C_FLAGS += -DTARGET_NAME=SKR_PRO
C_FLAGS += -DDEVICE_SERIAL=1
#C_FLAGS += -DDEVICE_FLASH=1
C_FLAGS += -DARM_MATH_CM4
C_FLAGS += -DTARGET_STM_EMAC
C_FLAGS += -DDEVICE_MPU=1
C_FLAGS += -include
C_FLAGS += mbed_config.h
C_FLAGS += -std=gnu11
C_FLAGS += -c
C_FLAGS += -Wall
C_FLAGS += -Wextra
C_FLAGS += -Wno-unused-parameter
C_FLAGS += -Wno-missing-field-initializers
C_FLAGS += -fmessage-length=0
C_FLAGS += -fno-exceptions
C_FLAGS += -ffunction-sections
C_FLAGS += -fdata-sections
C_FLAGS += -funsigned-char
C_FLAGS += -MMD
C_FLAGS += -fno-delete-null-pointer-checks
C_FLAGS += -fomit-frame-pointer
C_FLAGS += -Os
C_FLAGS += -g1
C_FLAGS += -DMBED_TRAP_ERRORS_ENABLED=1
C_FLAGS += -mcpu=cortex-m4
C_FLAGS += -mthumb
C_FLAGS += -mfpu=fpv4-sp-d16
C_FLAGS += -mfloat-abi=softfp
C_FLAGS += -DMBED_ROM_START=0x8000000
C_FLAGS += -DMBED_ROM_SIZE=0x80000
C_FLAGS += -DMBED_RAM_START=0x20000000
C_FLAGS += -DMBED_RAM_SIZE=0x20000
C_FLAGS += -DMBED_RAM1_START=0x10000000
C_FLAGS += -DMBED_RAM1_SIZE=0x10000

#CXX_FLAGS
CXX_FLAGS += -std=gnu++14
CXX_FLAGS += -fno-rtti
CXX_FLAGS += -Wvla
CXX_FLAGS += -include
CXX_FLAGS += mbed_config.h
CXX_FLAGS += -DBIGTREETECH_SKR_PRO
CXX_FLAGS += -DDEVICE_SPISLAVE=1
CXX_FLAGS += -DDEVICE_EMAC=1
CXX_FLAGS += -D__MBED__=1
CXX_FLAGS += -DDEVICE_I2CSLAVE=1
CXX_FLAGS += -D__FPU_PRESENT=1
CXX_FLAGS += -DDEVICE_PORTOUT=1
CXX_FLAGS += -DDEVICE_PORTINOUT=1
#CXX_FLAGS += -DTARGET_RTOS_M4_M7
CXX_FLAGS += -DTARGET_STM32F407xx
CXX_FLAGS += -DMBED_BUILD_TIMESTAMP=1564848461.06
CXX_FLAGS += -DTARGET_STM32F4
#CXX_FLAGS += -D__CMSIS_RTOS
CXX_FLAGS += -DDEVICE_WATCHDOG=1
CXX_FLAGS += -DTOOLCHAIN_GCC
CXX_FLAGS += -DDEVICE_I2C_ASYNCH=1
CXX_FLAGS += -DTARGET_STM32F407xG
CXX_FLAGS += -DTARGET_CORTEX_M
CXX_FLAGS += -DTARGET_LIKE_CORTEX_M4
CXX_FLAGS += -DDEVICE_ANALOGOUT=1
CXX_FLAGS += -DTARGET_M4
CXX_FLAGS += -DDEVICE_ANALOGIN=1
CXX_FLAGS += -DCOMPONENT_PSA_SRV_IMPL=1
CXX_FLAGS += -DDEVICE_SPI_ASYNCH=1
CXX_FLAGS += -DDEVICE_PWMOUT=1
CXX_FLAGS += -DUSE_FULL_LL_DRIVER
CXX_FLAGS += -DTARGET_CORTEX
CXX_FLAGS += -DDEVICE_I2C=1
CXX_FLAGS += -DTRANSACTION_QUEUE_SIZE_SPI=2
CXX_FLAGS += -D__CORTEX_M4
CXX_FLAGS += -DDEVICE_STDIO_MESSAGES=1
CXX_FLAGS += -DTARGET_FAMILY_STM32
CXX_FLAGS += -DUSE_HAL_DRIVER
#CXX_FLAGS += -DTARGET_FF_ARDUINO
CXX_FLAGS += -DDEVICE_PORTIN=1
CXX_FLAGS += -DTARGET_RELEASE
CXX_FLAGS += -DTARGET_STM
CXX_FLAGS += -DTARGET_STM32F407
CXX_FLAGS += -DCOMPONENT_PSA_SRV_EMUL=1
CXX_FLAGS += -DDEVICE_USTICKER=1
CXX_FLAGS += -DTARGET_STM32F407ZG
CXX_FLAGS += -DDEVICE_TRNG=1
CXX_FLAGS += -DTARGET_LIKE_MBED
#CXX_FLAGS += -D__MBED_CMSIS_RTOS_CM
CXX_FLAGS += -DDEVICE_SLEEP=1
CXX_FLAGS += -DTOOLCHAIN_GCC_ARM
CXX_FLAGS += -DDEVICE_RESET_REASON=1
CXX_FLAGS += -DDEVICE_SPI=1
CXX_FLAGS += -DUSB_STM_HAL
CXX_FLAGS += -DCOMPONENT_NSPE=1
CXX_FLAGS += -DDEVICE_INTERRUPTIN=1
CXX_FLAGS += -DDEVICE_RTC=1
CXX_FLAGS += -DTARGET_NAME=SKR_PRO
CXX_FLAGS += -DDEVICE_SERIAL=1
CXX_FLAGS += -DDEVICE_FLASH=1
CXX_FLAGS += -DARM_MATH_CM4
CXX_FLAGS += -DTARGET_STM_EMAC
CXX_FLAGS += -DDEVICE_MPU=1
CXX_FLAGS += -include
CXX_FLAGS += mbed_config.h
CXX_FLAGS += -std=gnu++14
CXX_FLAGS += -fno-rtti
CXX_FLAGS += -Wvla
CXX_FLAGS += -c
CXX_FLAGS += -Wall
CXX_FLAGS += -Wextra
CXX_FLAGS += -Wno-unused-parameter
CXX_FLAGS += -Wno-missing-field-initializers
CXX_FLAGS += -fmessage-length=0
CXX_FLAGS += -fno-exceptions
CXX_FLAGS += -ffunction-sections
CXX_FLAGS += -fdata-sections
CXX_FLAGS += -funsigned-char
CXX_FLAGS += -MMD
CXX_FLAGS += -fno-delete-null-pointer-checks
CXX_FLAGS += -fomit-frame-pointer
CXX_FLAGS += -Os
CXX_FLAGS += -g1
CXX_FLAGS += -DMBED_TRAP_ERRORS_ENABLED=1
CXX_FLAGS += -mcpu=cortex-m4
CXX_FLAGS += -mthumb
CXX_FLAGS += -mfpu=fpv4-sp-d16
CXX_FLAGS += -mfloat-abi=softfp
CXX_FLAGS += -DMBED_ROM_START=0x8000000
CXX_FLAGS += -DMBED_ROM_SIZE=0x80000
CXX_FLAGS += -DMBED_RAM_START=0x20000000
CXX_FLAGS += -DMBED_RAM_SIZE=0x20000
CXX_FLAGS += -DMBED_RAM1_START=0x10000000
CXX_FLAGS += -DMBED_RAM1_SIZE=0x10000

#ASM_FLAGS
ASM_FLAGS += -x
ASM_FLAGS += assembler-with-cpp
ASM_FLAGS += -DTRANSACTION_QUEUE_SIZE_SPI=2
ASM_FLAGS += -D__CORTEX_M4
ASM_FLAGS += -DUSB_STM_HAL
ASM_FLAGS += -DARM_MATH_CM4
ASM_FLAGS += -D__FPU_PRESENT=1
ASM_FLAGS += -DUSE_FULL_LL_DRIVER
ASM_FLAGS += -D__MBED_CMSIS_RTOS_CM
ASM_FLAGS += -D__CMSIS_RTOS
ASM_FLAGS += -DUSE_HAL_DRIVER
#ASM_FLAGS += -I/usr/src/mbed-sdk
ASM_FLAGS += -I..
ASM_FLAGS += -I../cmsis
ASM_FLAGS += -I../cmsis/TARGET_CORTEX_M
ASM_FLAGS += -I../cpp
ASM_FLAGS += -I../capi
ASM_FLAGS += -I../capi/TARGET_CORTEX_M
ASM_FLAGS += -I../capi/internal
ASM_FLAGS += -I../vendor/STM
ASM_FLAGS += -I../vendor/STM/STM32F4
ASM_FLAGS += -I../vendor/STM/STM32F4/device
ASM_FLAGS += -I../vendor/STM/STM32F4/STM32F407xG
ASM_FLAGS += -I../vendor/STM/STM32F4/STM32F407xG/device
ASM_FLAGS += -I../vendor/STM/STM32F4/STM32F407xG/BIGTREETECH_SKR_PRO
ASM_FLAGS += -include
ASM_FLAGS += mbed_config.h
ASM_FLAGS += -x
ASM_FLAGS += assembler-with-cpp
ASM_FLAGS += -c
ASM_FLAGS += -Wall
ASM_FLAGS += -Wextra
ASM_FLAGS += -Wno-unused-parameter
ASM_FLAGS += -Wno-missing-field-initializers
ASM_FLAGS += -fmessage-length=0
ASM_FLAGS += -fno-exceptions
ASM_FLAGS += -ffunction-sections
ASM_FLAGS += -fdata-sections
ASM_FLAGS += -funsigned-char
ASM_FLAGS += -MMD
ASM_FLAGS += -fno-delete-null-pointer-checks
ASM_FLAGS += -fomit-frame-pointer
ASM_FLAGS += -Os
ASM_FLAGS += -g1
ASM_FLAGS += -DMBED_TRAP_ERRORS_ENABLED=1
ASM_FLAGS += -mcpu=cortex-m4
ASM_FLAGS += -mthumb
ASM_FLAGS += -mfpu=fpv4-sp-d16
ASM_FLAGS += -mfloat-abi=softfp
