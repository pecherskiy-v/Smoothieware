/*
 * mbed SDK
 * Copyright (c) 2017 ARM Limited
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 * http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

// Automatically generated configuration file.
// DO NOT EDIT, content will be overwritten.

#ifndef __MBED_CONFIG_DATA__
#define __MBED_CONFIG_DATA__

// Configuration parameters
#define CLOCK_SOURCE                                                          USE_PLL_HSE_XTAL                                                                                 // set by target:ARCH_MAX
#define LPTICKER_DELAY_TICKS                                                  1                                                                                                // set by target:FAMILY_STM32
#define MBED_CONF_DRIVERS_UART_SERIAL_RXBUF_SIZE                              256                                                                                              // set by library:drivers
#define MBED_CONF_DRIVERS_UART_SERIAL_TXBUF_SIZE                              256                                                                                              // set by library:drivers
#define MBED_CONF_FILESYSTEM_PRESENT                                          1                                                                                                // set by library:filesystem
#define MBED_CONF_GEMALTO_CINTERION_BAUDRATE                                  115200                                                                                           // set by library:GEMALTO_CINTERION
#define MBED_CONF_GEMALTO_CINTERION_PROVIDE_DEFAULT                           0                                                                                                // set by library:GEMALTO_CINTERION
#define MBED_CONF_GENERIC_AT3GPP_BAUDRATE                                     115200                                                                                           // set by library:GENERIC_AT3GPP
#define MBED_CONF_GENERIC_AT3GPP_PROVIDE_DEFAULT                              0                                                                                                // set by library:GENERIC_AT3GPP
#define MBED_CONF_MBED_MESH_API_6LOWPAN_ND_CHANNEL                            0                                                                                                // set by library:mbed-mesh-api
#define MBED_CONF_MBED_MESH_API_6LOWPAN_ND_CHANNEL_MASK                       0x7fff800                                                                                        // set by library:mbed-mesh-api
#define MBED_CONF_MBED_MESH_API_6LOWPAN_ND_CHANNEL_PAGE                       0                                                                                                // set by library:mbed-mesh-api
#define MBED_CONF_MBED_MESH_API_6LOWPAN_ND_DEVICE_TYPE                        NET_6LOWPAN_ROUTER                                                                               // set by library:mbed-mesh-api
#define MBED_CONF_MBED_MESH_API_6LOWPAN_ND_PANID_FILTER                       0xffff                                                                                           // set by library:mbed-mesh-api
#define MBED_CONF_MBED_MESH_API_6LOWPAN_ND_PSK_KEY                            {0xa0, 0xa1, 0xa2, 0xa3, 0xa4, 0xa5, 0xa6, 0xa7, 0xa8, 0xa9, 0xaa, 0xab, 0xac, 0xad, 0xae, 0xaf} // set by library:mbed-mesh-api
#define MBED_CONF_MBED_MESH_API_6LOWPAN_ND_PSK_KEY_ID                         1                                                                                                // set by library:mbed-mesh-api
#define MBED_CONF_MBED_MESH_API_6LOWPAN_ND_SECURITY_MODE                      NONE                                                                                             // set by library:mbed-mesh-api
#define MBED_CONF_MBED_MESH_API_6LOWPAN_ND_SEC_LEVEL                          5                                                                                                // set by library:mbed-mesh-api
#define MBED_CONF_MBED_MESH_API_HEAP_SIZE                                     32500                                                                                            // set by library:mbed-mesh-api
#define MBED_CONF_MBED_MESH_API_HEAP_STAT_INFO                                NULL                                                                                             // set by library:mbed-mesh-api
#define MBED_CONF_MBED_MESH_API_THREAD_CONFIG_CHANNEL                         22                                                                                               // set by library:mbed-mesh-api
#define MBED_CONF_MBED_MESH_API_THREAD_CONFIG_CHANNEL_MASK                    0x7fff800                                                                                        // set by library:mbed-mesh-api
#define MBED_CONF_MBED_MESH_API_THREAD_CONFIG_CHANNEL_PAGE                    0                                                                                                // set by library:mbed-mesh-api
#define MBED_CONF_MBED_MESH_API_THREAD_CONFIG_COMMISSIONING_DATASET_TIMESTAMP 0x10000                                                                                          // set by library:mbed-mesh-api
#define MBED_CONF_MBED_MESH_API_THREAD_CONFIG_EXTENDED_PANID                  {0xf1, 0xb5, 0xa1, 0xb2,0xc4, 0xd5, 0xa1, 0xbd }                                                 // set by library:mbed-mesh-api
#define MBED_CONF_MBED_MESH_API_THREAD_CONFIG_ML_PREFIX                       {0xfd, 0x0, 0x0d, 0xb8, 0x0, 0x0, 0x0, 0x0}                                                      // set by library:mbed-mesh-api
#define MBED_CONF_MBED_MESH_API_THREAD_CONFIG_NETWORK_NAME                    "Thread Network"                                                                                 // set by library:mbed-mesh-api
#define MBED_CONF_MBED_MESH_API_THREAD_CONFIG_PANID                           0x0700                                                                                           // set by library:mbed-mesh-api
#define MBED_CONF_MBED_MESH_API_THREAD_CONFIG_PSKC                            {0xc8, 0xa6, 0x2e, 0xae, 0xf3, 0x68, 0xf3, 0x46, 0xa9, 0x9e, 0x57, 0x85, 0x98, 0x9d, 0x1c, 0xd0} // set by library:mbed-mesh-api
#define MBED_CONF_MBED_MESH_API_THREAD_DEVICE_TYPE                            MESH_DEVICE_TYPE_THREAD_ROUTER                                                                   // set by library:mbed-mesh-api
#define MBED_CONF_MBED_MESH_API_THREAD_MASTER_KEY                             {0x10, 0x11, 0x22, 0x33, 0x44, 0x55, 0x66, 0x77, 0x88, 0x99, 0xaa, 0xbb, 0xcc, 0xdd, 0xee, 0xff} // set by library:mbed-mesh-api
#define MBED_CONF_MBED_MESH_API_THREAD_PSKD                                   "ABCDEFGH"                                                                                       // set by library:mbed-mesh-api
#define MBED_CONF_MBED_MESH_API_THREAD_SECURITY_POLICY                        255                                                                                              // set by library:mbed-mesh-api
#define MBED_CONF_MBED_MESH_API_THREAD_USE_STATIC_LINK_CONFIG                 1                                                                                                // set by library:mbed-mesh-api
#define MBED_CONF_MBED_MESH_API_USE_MALLOC_FOR_HEAP                           0                                                                                                // set by library:mbed-mesh-api
#define MBED_CONF_MBED_MESH_API_WISUN_BC_CHANNEL_FUNCTION                     255                                                                                              // set by library:mbed-mesh-api
#define MBED_CONF_MBED_MESH_API_WISUN_BC_DWELL_INTERVAL                       0                                                                                                // set by library:mbed-mesh-api
#define MBED_CONF_MBED_MESH_API_WISUN_BC_FIXED_CHANNEL                        0xffff                                                                                           // set by library:mbed-mesh-api
#define MBED_CONF_MBED_MESH_API_WISUN_BC_INTERVAL                             0                                                                                                // set by library:mbed-mesh-api
#define MBED_CONF_MBED_MESH_API_WISUN_NETWORK_NAME                            "Wi-SUN Network"                                                                                 // set by library:mbed-mesh-api
#define MBED_CONF_MBED_MESH_API_WISUN_OPERATING_CLASS                         255                                                                                              // set by library:mbed-mesh-api
#define MBED_CONF_MBED_MESH_API_WISUN_OPERATING_MODE                          255                                                                                              // set by library:mbed-mesh-api
#define MBED_CONF_MBED_MESH_API_WISUN_REGULATORY_DOMAIN                       3                                                                                                // set by library:mbed-mesh-api
#define MBED_CONF_MBED_MESH_API_WISUN_UC_CHANNEL_FUNCTION                     255                                                                                              // set by library:mbed-mesh-api
#define MBED_CONF_MBED_MESH_API_WISUN_UC_DWELL_INTERVAL                       0                                                                                                // set by library:mbed-mesh-api
#define MBED_CONF_MBED_MESH_API_WISUN_UC_FIXED_CHANNEL                        0xffff                                                                                           // set by library:mbed-mesh-api
#define MBED_CONF_MCR20A_PROVIDE_DEFAULT                                      0                                                                                                // set by library:mcr20a
#define MBED_CONF_NANOSTACK_CONFIGURATION                                     nanostack_full                                                                                   // set by library:nanostack
#define MBED_CONF_NANOSTACK_HAL_CRITICAL_SECTION_USABLE_FROM_INTERRUPT        0                                                                                                // set by library:nanostack-hal
#define MBED_CONF_NANOSTACK_HAL_EVENT_LOOP_DISPATCH_FROM_APPLICATION          0                                                                                                // set by library:nanostack-hal
#define MBED_CONF_NANOSTACK_HAL_EVENT_LOOP_THREAD_STACK_SIZE                  6144                                                                                             // set by library:nanostack-hal
#define MBED_CONF_NANOSTACK_HAL_EVENT_LOOP_USE_MBED_EVENTS                    0                                                                                                // set by library:nanostack-hal
#define MBED_CONF_NSAPI_DEFAULT_MESH_TYPE                                     THREAD                                                                                           // set by library:nsapi
#define MBED_CONF_NSAPI_DEFAULT_STACK                                         LWIP                                                                                             // set by library:nsapi
#define MBED_CONF_NSAPI_DEFAULT_WIFI_SECURITY                                 NONE                                                                                             // set by library:nsapi
#define MBED_CONF_NSAPI_DNS_CACHE_SIZE                                        3                                                                                                // set by library:nsapi
#define MBED_CONF_NSAPI_DNS_RESPONSE_WAIT_TIME                                10000                                                                                            // set by library:nsapi
#define MBED_CONF_NSAPI_DNS_RETRIES                                           2                                                                                                // set by library:nsapi
#define MBED_CONF_NSAPI_DNS_TOTAL_ATTEMPTS                                    3                                                                                                // set by library:nsapi
#define MBED_CONF_NSAPI_PRESENT                                               1                                                                                                // set by library:nsapi
#define MBED_CONF_NSAPI_SOCKET_STATS_ENABLED                                  0                                                                                                // set by library:nsapi
#define MBED_CONF_NSAPI_SOCKET_STATS_MAX_COUNT                                10                                                                                               // set by library:nsapi
#define MBED_CONF_PLATFORM_CRASH_CAPTURE_ENABLED                              0                                                                                                // set by library:platform
#define MBED_CONF_PLATFORM_CTHUNK_COUNT_MAX                                   8                                                                                                // set by library:platform
#define MBED_CONF_PLATFORM_DEFAULT_SERIAL_BAUD_RATE                           9600                                                                                             // set by library:platform
#define MBED_CONF_PLATFORM_ERROR_ALL_THREADS_INFO                             0                                                                                                // set by library:platform
#define MBED_CONF_PLATFORM_ERROR_FILENAME_CAPTURE_ENABLED                     0                                                                                                // set by library:platform
#define MBED_CONF_PLATFORM_ERROR_HIST_ENABLED                                 0                                                                                                // set by library:platform
#define MBED_CONF_PLATFORM_ERROR_HIST_SIZE                                    4                                                                                                // set by library:platform
#define MBED_CONF_PLATFORM_ERROR_REBOOT_MAX                                   1                                                                                                // set by library:platform
#define MBED_CONF_PLATFORM_FATAL_ERROR_AUTO_REBOOT_ENABLED                    0                                                                                                // set by library:platform
#define MBED_CONF_PLATFORM_FORCE_NON_COPYABLE_ERROR                           0                                                                                                // set by library:platform
#define MBED_CONF_PLATFORM_MAX_ERROR_FILENAME_LEN                             16                                                                                               // set by library:platform
#define MBED_CONF_PLATFORM_POLL_USE_LOWPOWER_TIMER                            0                                                                                                // set by library:platform
#define MBED_CONF_PLATFORM_STDIO_BAUD_RATE                                    9600                                                                                             // set by library:platform
#define MBED_CONF_PLATFORM_STDIO_BUFFERED_SERIAL                              0                                                                                                // set by library:platform
#define MBED_CONF_PLATFORM_STDIO_CONVERT_NEWLINES                             0                                                                                                // set by library:platform
#define MBED_CONF_PLATFORM_STDIO_CONVERT_TTY_NEWLINES                         0                                                                                                // set by library:platform
#define MBED_CONF_PLATFORM_STDIO_FLUSH_AT_EXIT                                1                                                                                                // set by library:platform
#define MBED_CONF_PLATFORM_USE_MPU                                            1                                                                                                // set by library:platform
#define MBED_CONF_QUECTEL_BC95_BAUDRATE                                       9600                                                                                             // set by library:QUECTEL_BC95
#define MBED_CONF_QUECTEL_BC95_PROVIDE_DEFAULT                                0                                                                                                // set by library:QUECTEL_BC95
#define MBED_CONF_QUECTEL_BG96_BAUDRATE                                       115200                                                                                           // set by library:QUECTEL_BG96
#define MBED_CONF_QUECTEL_BG96_PROVIDE_DEFAULT                                0                                                                                                // set by library:QUECTEL_BG96
#define MBED_CONF_QUECTEL_EC2X_BAUDRATE                                       115200                                                                                           // set by library:QUECTEL_EC2X
#define MBED_CONF_QUECTEL_EC2X_PROVIDE_DEFAULT                                0                                                                                                // set by library:QUECTEL_EC2X
#define MBED_CONF_QUECTEL_M26_BAUDRATE                                        115200                                                                                           // set by library:QUECTEL_M26
#define MBED_CONF_QUECTEL_M26_PROVIDE_DEFAULT                                 0                                                                                                // set by library:QUECTEL_M26
#define MBED_CONF_QUECTEL_UG96_BAUDRATE                                       115200                                                                                           // set by library:QUECTEL_UG96
#define MBED_CONF_QUECTEL_UG96_PROVIDE_DEFAULT                                0                                                                                                // set by library:QUECTEL_UG96
#define MBED_CONF_S2LP_PROVIDE_DEFAULT                                        0                                                                                                // set by library:s2lp
#define MBED_CONF_SARA4_PPP_BAUDRATE                                          115200                                                                                           // set by library:SARA4_PPP
#define MBED_CONF_SARA4_PPP_PROVIDE_DEFAULT                                   0                                                                                                // set by library:SARA4_PPP
#define MBED_CONF_STM32_EMAC_ETH_RXBUFNB                                      4                                                                                                // set by library:stm32-emac
#define MBED_CONF_STM32_EMAC_ETH_TXBUFNB                                      4                                                                                                // set by library:stm32-emac
#define MBED_CONF_STORAGE_DEFAULT_KV                                          kv                                                                                               // set by library:storage
#define MBED_CONF_STORAGE_FILESYSTEM_BLOCKDEVICE                              default                                                                                          // set by library:storage_filesystem
#define MBED_CONF_STORAGE_FILESYSTEM_EXTERNAL_BASE_ADDRESS                    0                                                                                                // set by library:storage_filesystem
#define MBED_CONF_STORAGE_FILESYSTEM_EXTERNAL_SIZE                            0                                                                                                // set by library:storage_filesystem
#define MBED_CONF_STORAGE_FILESYSTEM_FILESYSTEM                               default                                                                                          // set by library:storage_filesystem
#define MBED_CONF_STORAGE_FILESYSTEM_FOLDER_PATH                              kvstore                                                                                          // set by library:storage_filesystem
#define MBED_CONF_STORAGE_FILESYSTEM_INTERNAL_BASE_ADDRESS                    0                                                                                                // set by library:storage_filesystem
#define MBED_CONF_STORAGE_FILESYSTEM_MOUNT_POINT                              kv                                                                                               // set by library:storage_filesystem
#define MBED_CONF_STORAGE_FILESYSTEM_NO_RBP_BLOCKDEVICE                       default                                                                                          // set by library:storage_filesystem_no_rbp
#define MBED_CONF_STORAGE_FILESYSTEM_NO_RBP_EXTERNAL_BASE_ADDRESS             0                                                                                                // set by library:storage_filesystem_no_rbp
#define MBED_CONF_STORAGE_FILESYSTEM_NO_RBP_EXTERNAL_SIZE                     0                                                                                                // set by library:storage_filesystem_no_rbp
#define MBED_CONF_STORAGE_FILESYSTEM_NO_RBP_FILESYSTEM                        default                                                                                          // set by library:storage_filesystem_no_rbp
#define MBED_CONF_STORAGE_FILESYSTEM_NO_RBP_FOLDER_PATH                       kvstore                                                                                          // set by library:storage_filesystem_no_rbp
#define MBED_CONF_STORAGE_FILESYSTEM_NO_RBP_MOUNT_POINT                       kv                                                                                               // set by library:storage_filesystem_no_rbp
#define MBED_CONF_STORAGE_FILESYSTEM_RBP_INTERNAL_SIZE                        0                                                                                                // set by library:storage_filesystem
#define MBED_CONF_STORAGE_STORAGE_TYPE                                        default                                                                                          // set by library:storage
#define MBED_CONF_STORAGE_TDB_EXTERNAL_BLOCKDEVICE                            default                                                                                          // set by library:storage_tdb_external
#define MBED_CONF_STORAGE_TDB_EXTERNAL_EXTERNAL_BASE_ADDRESS                  0                                                                                                // set by library:storage_tdb_external
#define MBED_CONF_STORAGE_TDB_EXTERNAL_EXTERNAL_SIZE                          0                                                                                                // set by library:storage_tdb_external
#define MBED_CONF_STORAGE_TDB_EXTERNAL_INTERNAL_BASE_ADDRESS                  0                                                                                                // set by library:storage_tdb_external
#define MBED_CONF_STORAGE_TDB_EXTERNAL_NO_RBP_BLOCKDEVICE                     default                                                                                          // set by library:storage_tdb_external_no_rbp
#define MBED_CONF_STORAGE_TDB_EXTERNAL_NO_RBP_EXTERNAL_BASE_ADDRESS           0                                                                                                // set by library:storage_tdb_external_no_rbp
#define MBED_CONF_STORAGE_TDB_EXTERNAL_NO_RBP_EXTERNAL_SIZE                   0                                                                                                // set by library:storage_tdb_external_no_rbp
#define MBED_CONF_STORAGE_TDB_EXTERNAL_RBP_INTERNAL_SIZE                      0                                                                                                // set by library:storage_tdb_external
#define MBED_CONF_STORAGE_TDB_INTERNAL_INTERNAL_BASE_ADDRESS                  0                                                                                                // set by library:storage_tdb_internal
#define MBED_CONF_STORAGE_TDB_INTERNAL_INTERNAL_SIZE                          0                                                                                                // set by library:storage_tdb_internal
#define MBED_CONF_TARGET_BOOT_STACK_SIZE                                      0x400                                                                                            // set by library:rtos[*]
#define MBED_CONF_TARGET_CONSOLE_UART                                         1                                                                                                // set by target:Target
#define MBED_CONF_TARGET_DEEP_SLEEP_LATENCY                                   3                                                                                                // set by target:FAMILY_STM32
#define MBED_CONF_TARGET_INIT_US_TICKER_AT_BOOT                               1                                                                                                // set by target:FAMILY_STM32
#define MBED_CONF_TARGET_LPTICKER_LPTIM_CLOCK                                 1                                                                                                // set by target:FAMILY_STM32
#define MBED_CONF_TARGET_LPUART_CLOCK_SOURCE                                  USE_LPUART_CLK_LSE|USE_LPUART_CLK_PCLK1                                                          // set by target:FAMILY_STM32
#define MBED_CONF_TARGET_LSE_AVAILABLE                                        0                                                                                                // set by target:ARCH_MAX
#define MBED_CONF_TARGET_MPU_ROM_END                                          0x0fffffff                                                                                       // set by target:Target
#define MBED_CONF_TARGET_NETWORK_DEFAULT_INTERFACE_TYPE                       ETHERNET                                                                                         // set by target:ARCH_MAX
#define MBED_CONF_TARGET_TICKLESS_FROM_US_TICKER                              0                                                                                                // set by target:Target
#define MBED_CONF_TELIT_HE910_BAUDRATE                                        115200                                                                                           // set by library:TELIT_HE910
#define MBED_CONF_TELIT_HE910_PROVIDE_DEFAULT                                 0                                                                                                // set by library:TELIT_HE910
#define MBED_CONF_TELIT_ME910_BAUDRATE                                        115200                                                                                           // set by library:TELIT_ME910
#define MBED_CONF_TELIT_ME910_PROVIDE_DEFAULT                                 0                                                                                                // set by library:TELIT_ME910
#define MBED_CONF_UBLOX_AT_BAUDRATE                                           115200                                                                                           // set by library:UBLOX_AT
#define MBED_CONF_UBLOX_AT_PROVIDE_DEFAULT                                    0                                                                                                // set by library:UBLOX_AT
#define MBED_CONF_UBLOX_N2XX_BAUDRATE                                         9600                                                                                             // set by library:UBLOX_N2XX
#define MBED_CONF_UBLOX_N2XX_PROVIDE_DEFAULT                                  0                                                                                                // set by library:UBLOX_N2XX
#define MBED_CONF_UBLOX_PPP_BAUDRATE                                          115200                                                                                           // set by library:UBLOX_PPP
#define MBED_CONF_UBLOX_PPP_PROVIDE_DEFAULT                                   0                                                                                                // set by library:UBLOX_PPP
#define MBED_CPU_STATS_ENABLED                                                1                                                                                                // set by application[*]
#define MBED_HEAP_STATS_ENABLED                                               1                                                                                                // set by application[*]
#define MBED_LFS_BLOCK_SIZE                                                   512                                                                                              // set by library:littlefs
#define MBED_LFS_ENABLE_INFO                                                  0                                                                                                // set by library:littlefs
#define MBED_LFS_INTRINSICS                                                   1                                                                                                // set by library:littlefs
#define MBED_LFS_LOOKAHEAD                                                    512                                                                                              // set by library:littlefs
#define MBED_LFS_PROG_SIZE                                                    64                                                                                               // set by library:littlefs
#define MBED_LFS_READ_SIZE                                                    64                                                                                               // set by library:littlefs
#define MBED_STACK_STATS_ENABLED                                              1                                                                                                // set by application[*]
#define MBED_SYS_STATS_ENABLED                                                1                                                                                                // set by application[*]
#define MBED_THREAD_STATS_ENABLED                                             1                                                                                                // set by application[*]
#define MEM_ALLOC                                                             malloc                                                                                           // set by library:mbed-trace
#define MEM_FREE                                                              free                                                                                             // set by library:mbed-trace
#define NVSTORE_ENABLED                                                       1                                                                                                // set by library:nvstore
#define NVSTORE_MAX_KEYS                                                      16                                                                                               // set by library:nvstore
// Macros
#define MBEDTLS_CIPHER_MODE_CTR                                                                                                                                                // defined by library:SecureStore
#define MBEDTLS_CMAC_C                                                                                                                                                         // defined by library:SecureStore
#define MBEDTLS_PSA_HAS_ITS_IO                                                                                                                                                 // defined by library:mbed-crypto
#define NS_USE_EXTERNAL_MBED_TLS                                                                                                                                               // defined by library:nanostack
#define UNITY_INCLUDE_CONFIG_H                                                                                                                                                 // defined by library:utest
#define _RTE_                                                                                                                                                                  // defined by library:rtos

#endif
