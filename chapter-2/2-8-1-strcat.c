/* Section 2.8 - Increment and decrement operator */
#include <stdio.h>

void mstrcat(char s[], char t[]);

int
main()
{
    char s[10] = "a";
    char t[10] = "hello";

    mstrcat(s,t);
    printf("%s\n", s);
}

/* strcat: concatenate t to end of s; s must be big enough */
void mstrcat(char s[], char t[])
{
    int i, j;

    i = j = 0;
    while(s[i] != '\0')
        i++;
    while((s[i++] = t[j++]) != '\0')
        ;
}
