// Exercise 1-7
// Write a program to print the value of EOF
#include <stdio.h>

main()
{
    int c;
    c = getchar();
    printf("c = %d\n", c);
    printf("EOF = %d\n", EOF);
}