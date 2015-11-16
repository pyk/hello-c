/* Section 1.5 - Chatacter input and output */
#include <stdio.h>

/* copy input to output; 2nd version */
main()
{
    int c;

    while ((c = getchar()) != EOF) {
        putchar(c);
    }
}
