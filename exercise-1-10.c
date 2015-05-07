// Exercise 1-10
// Write a program to copy its input to its output, replacing each tab by \t,
// each backspace by \b, and each backslash by \\. This makes tabs and
// backspaces visible in an unambiguous way.
// + cannot implement '\b'
#include <stdio.h>

main()
{
    int c;
    while((c = getchar()) != EOF) {
        if (c == '\t')
        {
            putchar('\\');
            // t character ASCII codes.
            putchar(116);
        }
        if (c == '\\')
        {
            putchar('\\');
            putchar('\\');
        }
        if (c != '\t' && c != '\b' && c != '\\')
        {
            putchar(c);
        }

    }
}