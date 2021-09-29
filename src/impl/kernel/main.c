#include "print.h"

void kernel_main() {
    print_clear();
    print_set_color(PRINT_COLOR_LIGHT_GREEN, PRINT_COLOR_BLACK);
    print_string("Kernel started successfully! \n");
    print_set_color(PRINT_COLOR_PINK, PRINT_COLOR_YELLOW);
    print_string("Seggsy OS!");
}