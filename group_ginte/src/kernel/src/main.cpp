#include "system.h"
#include "discriptor_tables.h"

// Define entry point in asm to prevent C++ mangling
extern "C"{
    void kernel_main();
}

void kernel_main()
{
    printf("Hello World");
    init_gdt();
    printf("gdt initialized");
}
