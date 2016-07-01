#ifndef _BDROID_BUILDCFG_H
#define _BDROID_BUILDCFG_H

#define BTA_DISABLE_DELAY 100

#define BTM_BLE_ADV_TX_POWER {-21, -15, -7, 1, 9}
#endif


/* Force define missing boottime alarm support */
#define KERNEL_MISSING_CLOCK_BOOTTIME_ALARM TRUE
