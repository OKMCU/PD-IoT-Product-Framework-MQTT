#ifndef RT_CONFIG_H__
#define RT_CONFIG_H__

/* Automatically generated file; DO NOT EDIT. */
/* RT-Thread Configuration */

/* RT-Thread Kernel */

#define RT_NAME_MAX 8
/* RT_USING_ARCH_DATA_TYPE is not set */
#define RT_ALIGN_SIZE 4
/* RT_THREAD_PRIORITY_8 is not set */
#define RT_THREAD_PRIORITY_32
/* RT_THREAD_PRIORITY_256 is not set */
#define RT_THREAD_PRIORITY_MAX 32
#define RT_TICK_PER_SECOND 100
#define RT_USING_OVERFLOW_CHECK
#define RT_USING_HOOK
#define RT_USING_IDLE_HOOK
#define RT_IDEL_HOOK_LIST_SIZE 4
#define IDLE_THREAD_STACK_SIZE 256
/* RT_USING_TIMER_SOFT is not set */
#define RT_DEBUG
#define RT_DEBUG_COLOR
/* RT_DEBUG_INIT_CONFIG is not set */
/* RT_DEBUG_THREAD_CONFIG is not set */
/* RT_DEBUG_SCHEDULER_CONFIG is not set */
/* RT_DEBUG_IPC_CONFIG is not set */
/* RT_DEBUG_TIMER_CONFIG is not set */
/* RT_DEBUG_IRQ_CONFIG is not set */
/* RT_DEBUG_MEM_CONFIG is not set */
/* RT_DEBUG_SLAB_CONFIG is not set */
/* RT_DEBUG_MEMHEAP_CONFIG is not set */
/* RT_DEBUG_MODULE_CONFIG is not set */

/* Inter-Thread communication */

#define RT_USING_SEMAPHORE
#define RT_USING_MUTEX
#define RT_USING_EVENT
#define RT_USING_MAILBOX
#define RT_USING_MESSAGEQUEUE
/* RT_USING_SIGNALS is not set */

/* Memory Management */

#define RT_USING_MEMPOOL
#define RT_USING_MEMHEAP
/* RT_USING_NOHEAP is not set */
#define RT_USING_SMALL_MEM
/* RT_USING_SLAB is not set */
/* RT_USING_MEMHEAP_AS_HEAP is not set */
/* RT_USING_MEMTRACE is not set */
#define RT_USING_HEAP

/* Kernel Device Object */

#define RT_USING_DEVICE
/* RT_USING_DEVICE_OPS is not set */
/* RT_USING_INTERRUPT_INFO is not set */
#define RT_USING_CONSOLE
#define RT_CONSOLEBUF_SIZE 128
#define RT_CONSOLE_DEVICE_NAME "uart1"
#define RT_VER_NUM 0x30103
/* ARCH_CPU_STACK_GROWS_UPWARD is not set */

/* RT-Thread Components */

#define RT_USING_COMPONENTS_INIT
#define RT_USING_USER_MAIN
#define RT_MAIN_THREAD_STACK_SIZE 2048
#define RT_MAIN_THREAD_PRIORITY 10

/* C++ features */

/* RT_USING_CPLUSPLUS is not set */

/* Command shell */

#define RT_USING_FINSH
#define FINSH_THREAD_NAME "tshell"
#define FINSH_USING_HISTORY
#define FINSH_HISTORY_LINES 5
#define FINSH_USING_SYMTAB
#define FINSH_USING_DESCRIPTION
/* FINSH_ECHO_DISABLE_DEFAULT is not set */
#define FINSH_THREAD_PRIORITY 20
#define FINSH_THREAD_STACK_SIZE 4096
#define FINSH_CMD_SIZE 80
/* FINSH_USING_AUTH is not set */
#define FINSH_USING_MSH
#define FINSH_USING_MSH_DEFAULT
#define FINSH_USING_MSH_ONLY
#define FINSH_ARG_MAX 10

/* Device virtual file system */

#define RT_USING_DFS
#define DFS_USING_WORKDIR
#define DFS_FILESYSTEMS_MAX 2
#define DFS_FILESYSTEM_TYPES_MAX 2
#define DFS_FD_MAX 16
/* RT_USING_DFS_MNTTABLE is not set */
/* RT_USING_DFS_ELMFAT is not set */
#define RT_USING_DFS_DEVFS
/* RT_USING_DFS_ROMFS is not set */
/* RT_USING_DFS_RAMFS is not set */
/* RT_USING_DFS_UFFS is not set */
/* RT_USING_DFS_JFFS2 is not set */

/* Device Drivers */

#define RT_USING_DEVICE_IPC
#define RT_PIPE_BUFSZ 512
#define RT_USING_SYSTEM_WORKQUEUE
#define RT_SYSTEM_WORKQUEUE_STACKSIZE 2048
#define RT_SYSTEM_WORKQUEUE_PRIORITY 23
#define RT_USING_SERIAL
#define RT_SERIAL_USING_DMA
#define RT_SERIAL_RB_BUFSZ 64
/* RT_USING_CAN is not set */
/* RT_USING_HWTIMER is not set */
/* RT_USING_CPUTIME is not set */
/* RT_USING_I2C is not set */
#define RT_USING_PIN
/* RT_USING_ADC is not set */
/* RT_USING_PWM is not set */
/* RT_USING_MTD_NOR is not set */
/* RT_USING_MTD_NAND is not set */
/* RT_USING_MTD is not set */
/* RT_USING_PM is not set */
/* RT_USING_RTC is not set */
/* RT_USING_SDIO is not set */
/* RT_USING_SPI is not set */
/* RT_USING_WDT is not set */
/* RT_USING_AUDIO is not set */
/* RT_USING_SENSOR is not set */

/* Using WiFi */

/* RT_USING_WIFI is not set */

/* Using USB */

/* RT_USING_USB_HOST is not set */
/* RT_USING_USB_DEVICE is not set */

/* POSIX layer and C standard library */

#define RT_USING_LIBC
/* RT_USING_PTHREADS is not set */
#define RT_USING_POSIX
/* RT_USING_POSIX_MMAP is not set */
/* RT_USING_POSIX_TERMIOS is not set */
/* RT_USING_POSIX_AIO is not set */
/* RT_USING_MODULE is not set */

/* Network */

/* Socket abstraction layer */

#define RT_USING_SAL

/* protocol stack implement */

#define SAL_USING_AT
#define SAL_USING_POSIX

/* Network interface device */

#define RT_USING_NETDEV
#define NETDEV_USING_IFCONFIG
#define NETDEV_USING_PING
#define NETDEV_USING_NETSTAT
#define NETDEV_USING_AUTO_DEFAULT

/* light weight TCP/IP stack */

/* RT_USING_LWIP is not set */

/* Modbus master and slave stack */

/* RT_USING_MODBUS is not set */

/* AT commands */

#define RT_USING_AT
#define AT_DEBUG
/* AT_USING_SERVER is not set */
#define AT_USING_CLIENT
#define AT_CLIENT_NUM_MAX 1
#define AT_USING_SOCKET
#define AT_USING_CLI
/* AT_PRINT_RAW_CMD is not set */
#define AT_CMD_MAX_LEN 1024
#define AT_SW_VERSION_NUM 0x10200

/* VBUS(Virtual Software BUS) */

/* RT_USING_VBUS is not set */

/* Utilities */

/* RT_USING_RYM is not set */
/* RT_USING_ULOG is not set */
/* RT_USING_UTEST is not set */

/* RT-Thread online packages */

/* IoT - internet of things */

#define PKG_USING_PAHOMQTT
#define PAHOMQTT_PIPE_MODE
/* PAHOMQTT_UDP_MODE is not set */
/* PKG_USING_PAHOMQTT_EXAMPLE is not set */
/* PKG_USING_PAHOMQTT_TEST is not set */
/* MQTT_USING_TLS is not set */
#define RT_PKG_MQTT_THREAD_STACK_SIZE 4096
#define PKG_PAHOMQTT_SUBSCRIBE_HANDLERS 1
#define MQTT_DEBUG
#define PKG_USING_PAHOMQTT_V110
/* PKG_USING_PAHOMQTT_V100 is not set */
/* PKG_USING_PAHOMQTT_LATEST is not set */
/* PKG_USING_WEBCLIENT is not set */
/* PKG_USING_WEBNET is not set */
/* PKG_USING_MONGOOSE is not set */
/* PKG_USING_WEBTERMINAL is not set */
/* PKG_USING_CJSON is not set */
/* PKG_USING_JSMN is not set */
/* PKG_USING_LIBMODBUS is not set */
/* PKG_USING_FREEMODBUS is not set */
/* PKG_USING_LJSON is not set */
/* PKG_USING_EZXML is not set */
/* PKG_USING_NANOPB is not set */

/* Wi-Fi */

/* Marvell WiFi */

/* PKG_USING_WLANMARVELL is not set */

/* Wiced WiFi */

/* PKG_USING_WLAN_WICED is not set */
/* PKG_USING_RW007 is not set */
/* PKG_USING_COAP is not set */
/* PKG_USING_NOPOLL is not set */
/* PKG_USING_NETUTILS is not set */
#define PKG_USING_AT_DEVICE
/* PKG_AT_INIT_BY_THREAD is not set */
/* AT_DEVICE_M26 is not set */
/* AT_DEVICE_EC20 is not set */
#define AT_DEVICE_ESP8266
/* AT_DEVICE_RW007 is not set */
/* AT_DEVICE_SIM800C is not set */
/* AT_DEVICE_SIM76XX is not set */
/* AT_DEVICE_NOT_SELECTED is not set */
#define AT_DEVICE_SOCKETS_NUM 5
#define AT_DEVICE_NAME "uart2"
#define AT_DEVICE_RECV_BUFF_LEN 512
#define AT_DEVICE_WIFI_SSID "CL-GUEST"
#define AT_DEVICE_WIFI_PASSWORD "CL87654321"
#define PKG_USING_AT_DEVICE_V160
/* PKG_USING_AT_DEVICE_V150 is not set */
/* PKG_USING_AT_DEVICE_V140 is not set */
/* PKG_USING_AT_DEVICE_LATEST_VERSION is not set */
#define PKG_AT_DEVICE_VER_NUM 0x10600
/* PKG_USING_ATSRV_SOCKET is not set */
/* PKG_USING_WIZNET is not set */

/* IoT Cloud */

/* PKG_USING_ONENET is not set */
/* PKG_USING_GAGENT_CLOUD is not set */
/* PKG_USING_ALI_IOTKIT is not set */
/* PKG_USING_AZURE is not set */
/* PKG_USING_TENCENT_IOTHUB is not set */
/* PKG_USING_NIMBLE is not set */
/* PKG_USING_OTA_DOWNLOADER is not set */
/* PKG_USING_IPMSG is not set */
/* PKG_USING_LSSDP is not set */
/* PKG_USING_AIRKISS_OPEN is not set */
/* PKG_USING_LIBRWS is not set */
/* PKG_USING_TCPSERVER is not set */
/* PKG_USING_PROTOBUF_C is not set */
/* PKG_USING_ONNX_PARSER is not set */
/* PKG_USING_ONNX_BACKEND is not set */

/* security packages */

/* PKG_USING_MBEDTLS is not set */
/* PKG_USING_libsodium is not set */
/* PKG_USING_TINYCRYPT is not set */

/* language packages */

/* PKG_USING_LUA is not set */
/* PKG_USING_JERRYSCRIPT is not set */
/* PKG_USING_MICROPYTHON is not set */

/* multimedia packages */

/* PKG_USING_OPENMV is not set */
/* PKG_USING_MUPDF is not set */
/* PKG_USING_STEMWIN is not set */
/* PKG_USING_WAVPLAYER is not set */
/* PKG_USING_TJPGD is not set */

/* tools packages */

/* PKG_USING_CMBACKTRACE is not set */
/* PKG_USING_EASYFLASH is not set */
/* PKG_USING_EASYLOGGER is not set */
/* PKG_USING_SYSTEMVIEW is not set */
/* PKG_USING_RDB is not set */
/* PKG_USING_QRCODE is not set */
/* PKG_USING_ULOG_EASYFLASH is not set */
/* PKG_USING_ADBD is not set */

/* system packages */

/* PKG_USING_GUIENGINE is not set */
/* PKG_USING_CAIRO is not set */
/* PKG_USING_PIXMAN is not set */
/* PKG_USING_LWEXT4 is not set */
/* PKG_USING_PARTITION is not set */
/* PKG_USING_FAL is not set */
/* PKG_USING_SQLITE is not set */
/* PKG_USING_RTI is not set */
/* PKG_USING_LITTLEVGL2RTT is not set */
/* PKG_USING_CMSIS is not set */
/* PKG_USING_DFS_YAFFS is not set */
/* PKG_USING_LITTLEFS is not set */
/* PKG_USING_THREAD_POOL is not set */
/* PKG_USING_ROBOTS is not set */

/* peripheral libraries and drivers */

/* PKG_USING_SENSORS_DRIVERS is not set */
/* PKG_USING_REALTEK_AMEBA is not set */
/* PKG_USING_SHT2X is not set */
/* PKG_USING_STM32_SDIO is not set */
/* PKG_USING_ICM20608 is not set */
/* PKG_USING_U8G2 is not set */
/* PKG_USING_BUTTON is not set */
/* PKG_USING_PCF8574 is not set */
/* PKG_USING_SX12XX is not set */
/* PKG_USING_SIGNAL_LED is not set */
/* PKG_USING_LEDBLINK is not set */
/* PKG_USING_WM_LIBRARIES is not set */
/* PKG_USING_KENDRYTE_SDK is not set */
/* PKG_USING_INFRARED is not set */
/* PKG_USING_ROSSERIAL is not set */
/* PKG_USING_AT24CXX is not set */
/* PKG_USING_MOTIONDRIVER2RTT is not set */
/* PKG_USING_AD7746 is not set */
/* PKG_USING_PCA9685 is not set */
/* PKG_USING_I2C_TOOLS is not set */
/* PKG_USING_NRF24L01 is not set */
/* PKG_USING_TOUCH_DRIVERS is not set */
/* PKG_USING_LCD_DRIVERS is not set */
/* PKG_USING_MAX17048 is not set */

/* miscellaneous packages */

/* PKG_USING_LIBCSV is not set */
/* PKG_USING_OPTPARSE is not set */
/* PKG_USING_FASTLZ is not set */
/* PKG_USING_MINILZO is not set */
/* PKG_USING_QUICKLZ is not set */
/* PKG_USING_MULTIBUTTON is not set */
/* PKG_USING_FLEXIBLE_BUTTON is not set */
/* PKG_USING_CANFESTIVAL is not set */
/* PKG_USING_ZLIB is not set */
/* PKG_USING_DSTR is not set */
/* PKG_USING_TINYFRAME is not set */
/* PKG_USING_KENDRYTE_DEMO is not set */
/* PKG_USING_DIGITALCTRL is not set */
/* PKG_USING_UPACKER is not set */
/* PKG_USING_UPARAM is not set */

/* samples: kernel and components samples */

/* PKG_USING_KERNEL_SAMPLES is not set */
/* PKG_USING_FILESYSTEM_SAMPLES is not set */
/* PKG_USING_NETWORK_SAMPLES is not set */
/* PKG_USING_PERIPHERAL_SAMPLES is not set */
/* PKG_USING_HELLO is not set */
/* PKG_USING_VI is not set */
/* PKG_USING_NNOM is not set */
/* PKG_USING_LIBANN is not set */
/* PKG_USING_ELAPACK is not set */
/* PKG_USING_ARMv7M_DWT is not set */
/* PKG_USING_VT100 is not set */
/* STM32F100RC is not set */
/* STM32F100RD is not set */
/* STM32F100RE is not set */
/* STM32F100VC is not set */
/* STM32F100VD is not set */
/* STM32F100VE is not set */
/* STM32F100ZC is not set */
/* STM32F100ZD is not set */
/* STM32F100ZE is not set */
/* STM32F101CB is not set */
/* STM32F101RB is not set */
/* STM32F101RC is not set */
/* STM32F101RD is not set */
/* STM32F101RE is not set */
/* STM32F101RF is not set */
/* STM32F101RG is not set */
/* STM32F101TB is not set */
/* STM32F101VB is not set */
/* STM32F101VC is not set */
/* STM32F101VD is not set */
/* STM32F101VE is not set */
/* STM32F101VF is not set */
/* STM32F101VG is not set */
/* STM32F101ZC is not set */
/* STM32F101ZD is not set */
/* STM32F101ZE is not set */
/* STM32F101ZF is not set */
/* STM32F101ZG is not set */
/* STM32F102CB is not set */
/* STM32F102RB is not set */
/* STM32F103C8 is not set */
/* STM32F103CB is not set */
/* STM32F103R8 is not set */
/* STM32F103RB is not set */
/* STM32F103RC is not set */
/* STM32F103RD is not set */
/* STM32F103RE is not set */
/* STM32F103RF is not set */
/* STM32F103RG is not set */
/* STM32F103T8 is not set */
/* STM32F103TB is not set */
/* STM32F103V8 is not set */
/* STM32F103VB is not set */
/* STM32F103VC is not set */
/* STM32F103VD is not set */
#define STM32F103VE
/* STM32F103VF is not set */
/* STM32F103VG is not set */
/* STM32F103ZC is not set */
/* STM32F103ZD is not set */
/* STM32F103ZE is not set */
/* STM32F103ZF is not set */
/* STM32F103ZG is not set */
/* STM32F105R8 is not set */
/* STM32F105RB is not set */
/* STM32F105RC is not set */
/* STM32F105V8 is not set */
/* STM32F105VB is not set */
/* STM32F105VC is not set */
/* STM32F107RB is not set */
/* STM32F107RC is not set */
/* STM32F107VB is not set */
/* STM32F107VC is not set */
#define RT_USING_HSI
#define RT_USING_UART1
#define RT_USING_UART2
/* RT_USING_UART3 is not set */
/* BSP_USING_WDT is not set */
/* BSP_USING_RTC is not set */
/* RT_USING_SDCARD is not set */
/* BSP_USING_PWM1 is not set */
/* BSP_USING_PWM2 is not set */
/* BSP_USING_PWM3 is not set */
/* BSP_USING_PWM4 is not set */
/* BSP_USING_PWM5 is not set */
/* BSP_USING_PWM8 is not set */

#endif
