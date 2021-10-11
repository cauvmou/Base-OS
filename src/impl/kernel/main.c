#include "print.h"

void kernel_main() {
    print_clear();
    print_set_color(PRINT_COLOR_BLACK, PRINT_COLOR_LIGHT_GREEN);
    print_string_centered("Kernel started successfully!");
    print_set_color(PRINT_COLOR_BLACK, PRINT_COLOR_LIGHT_BLUE);
    print_string_centered("Nothing has been done yet...");
}