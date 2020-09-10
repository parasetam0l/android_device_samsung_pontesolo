#include <stdlib.h>
#define _REALLY_INCLUDE_SYS__SYSTEM_PROPERTIES_H_
#include <sys/_system_properties.h>
#include <cutils/properties.h>

#include "vendor_init.h"
#include "property_service.h"
//#include "log.h"
#include "util.h"

void vendor_load_properties()
{
    char platform[PROP_VALUE_MAX];
    char bootloader[PROP_VALUE_MAX];
    char device[PROP_VALUE_MAX];
    char devicename[PROP_VALUE_MAX];
    //int rc;

    //UNUSED(msm_id);
    //UNUSED(msm_ver);
    //UNUSED(board_type);

    /*rc = property_get("ro.board.platform", platform);
    if (!rc || !ISMATCH(platform, ANDROID_TARGET))
        return;*/

    property_get("ro.bootloader", bootloader, "def");

   /* pontesolo */
     property_set("ro.build.fingerprint", "samsung/pontesoloxx/pontesolo:4.4.2/KOT49H/I9301IXXUANL1:user/release-keys");
     property_set("ro.build.description", "pontesoloxx-user 4.4.2 KOT49H I9301IXXUANL1 release-keys");
     property_set("ro.product.model", "SM-R750");
     property_set("ro.product.device", "pontesolo");
     property_set("telephony.lteOnGsmDevice", "0");
     property_set("ro.telephony.default_network", "0");
    // property_set("ro.telephony.ril_class", "SamsungMSM8226RIL");
    property_get("ro.product.device", device, "pontesolo");
    strlcpy(devicename, device, sizeof(devicename));
    //INFO("Found bootloader id %s setting build properties for %s device\n", bootloader, devicename);
}
