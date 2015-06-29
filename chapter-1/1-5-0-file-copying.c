#include <stdio.h>

// copy input to output; 1st version
main()
{
    int c;

    c = getchar(); // block until a new line
    while (c != EOF) {
        putchar(c);
        c = getchar();
    }
}
