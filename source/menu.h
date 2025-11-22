#ifndef MENU_H
#define MENU_H

#include <dirent.h>
#include <stdio.h>
#include <string.h>

#include <switch.h>

#include "console.h"
#include "patch.h"
#include "util.h"

#define IPSWITCH_DIR "/switch/ipswitch/"

u64 patchTextSelect(PatchTextTarget* pchtxt_target, PadState* pad);

void mainMenu(PadState* pad);

u64 patchTextToIPSMenu(PadState* pad);

u64 patchTextToggleMenu(PadState* pad);

#endif