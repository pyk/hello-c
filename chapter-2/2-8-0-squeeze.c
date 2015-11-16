/* Section 2.8 - Increment and decrement operators */
#include <stdio.h>

void squeeze(char s[], int n);

int
main()
{
    char s[6] = {'H', '3', 'L', 'l', '0', '\0'};
    int n = '3';
    printf("before: %s\n", s);
    squeeze(s,n);
    printf("after: %s\n", s);
}

/* squeeze: delete all c from s */
void
squeeze(char s[], int c)
{
    int i, j;

    for(i = j = 0; s[i] != '\0'; i++)
        if(s[i] != c)
            s[j++] = s[i];
    s[j] = '\0';
}
