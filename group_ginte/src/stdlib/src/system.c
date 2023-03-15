#include "system.h"

    int printf(const char *format, ...)
    {
        volatile char *video = (volatile char*)0xB8000;
        while( *format != 0 )
        {
            *video++ = *format++;
            *video++ = 0x0F;
        }
    }