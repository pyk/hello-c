/* Section 2.3 - Constants */
#include <stdio.h>

int strlen(char s[]);

main()
{
    char str[] = "hello";
    printf("strlen(str) = %d\n", strlen(str));
}

/* strlen: return length of s */
int strlen(char s[])
{
    int i;

    i = 0;
    while(s[i] != '\0') {
        ++i;
    }
    return i;
}
