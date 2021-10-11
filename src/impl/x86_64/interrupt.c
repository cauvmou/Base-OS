#include "interrupt.h"

#define PIC1		0x20		/* IO base address for master PIC */
#define PIC2		0xA0		/* IO base address for slave PIC */
#define PIC1_COMMAND	PIC1
#define PIC1_DATA	(PIC1+1)
#define PIC2_COMMAND	PIC2
#define PIC2_DATA	(PIC2+1)

struct GDT {
    size_t base
    size_t limit
    size_t type
}

void setup_interrupts() {
    asm("")
}

// i love cock so goddamn bad
// uwu