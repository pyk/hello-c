#include <stdio.h>

#define NL '\n'
main()
{
    int c;
    while((c = getchar()) != EOF) {
        if (c == ' ' || c == '\t')
        {
            c += NL;
        }
        putchar(c);
    }
}