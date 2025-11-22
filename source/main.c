#include <switch.h>

#include "config.h"
#include "menu.h"

int main(int argc, char **argv) {
    consoleInit(NULL);

    // Configure input - 1 player using standard controller
    padConfigureInput(1, HidNpadStyleSet_NpadStandard);

    // Initialize the default gamepad (Player 1 controller)
    PadState pad;
    padInitializeDefault(&pad);

    if (checkRequirement(&pad) == 0) {
        printf(CONSOLE_ESC(35;1m)
            "Welcome to IPSwitch\n\n" CONSOLE_ESC(m));

        mainMenu(&pad);
    }

    consoleExit(NULL);
    return 0;
}