/*  Section 1.1
    `printf` never supplies a newline automatically, so several calls may be 
    used to build up an output line in stages. */

#include <stdio.h>

main()
{
    printf("hello, ");
    printf("world");
    printf("\n");
}
