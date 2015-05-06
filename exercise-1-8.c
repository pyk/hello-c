// Exercise 1-8
// Write a program to count blanks, tabs, and newlines
#include <stdio.h>

main()
{
    int c, n;
    n = 0;
    while((c = getchar()) != EOF) {
        if (c == '\n' || c == '\t' || c == ' ')
        {
            n++;
        }
    }
    printf("%d\n", n);
}