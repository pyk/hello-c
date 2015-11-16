/* Section 2.7 - Type conversions */
#include <stdio.h>
#include <string.h>

int lower(int c);

int
main()
{
    int i;
    char s[6] = {'H', 'e', 'L', 'O','s', '\0'};
    printf("s = %s\n", s);

    for(i = 0; i < strlen(s); i++) {
        printf("s[%d] = %c\n", i, s[i]);
        printf("s[%d] = %c\n", i, lower(s[i]));
        s[i] = lower(s[i]);
    }

    printf("s = %s\n", s);
}

int
lower(int c)
{
    if(c >= 'A' && c <= 'Z')
        return c + 'a' - 'A';
    else
        return c;
}
