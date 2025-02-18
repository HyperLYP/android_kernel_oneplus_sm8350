/* SPDX-License-Identifier: GPL-2.0 */

#define CONFIG_AW8697_HAPTIC 1
#define CONFIG_FINGERPRINT_DETECT 1
#define CONFIG_FINGERPRINT_FPC 1
#define CONFIG_FINGERPRINT_GOODIX 1
#define CONFIG_INPUT_FINGERPRINT 1
#define CONFIG_PARAM_READ_WRITE 1
#define CONFIG_OP_CMDLINE 1
#define CONFIG_OPLUS_CHG 1
#define CONFIG_OPLUS_SM8350_CHARGER 1
#define CONFIG_OPLUS_CHG_DYNAMIC_CONFIG 1
#define CONFIG_OPLUS_CHG_OOS 1
#define CONFIG_PROJECT_INFO 1
#define CONFIG_TOUCHSCREEN 1
#define CONFIG_TRI_STATE_KEY 1

#if IS_ENABLED(CONFIG_QGKI)
#define CONFIG_OEM_BOOT_MODE 1
#endif
