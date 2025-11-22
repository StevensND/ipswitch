#include "config.h"
#include "patch.h"

int checkRequirement(PadState* pad) {
    if(!isDirectory(ATMOS_DIR)) {
    	userConfirm("Do you even Atmosphere bro?", pad);
    	return -1;
    }
    return 0;
}