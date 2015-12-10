/* Exercise 2-10
 * Rewrite the function lower, which converts upper case letters to lower case,
 * with conditional expression instead of if-else */
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
        printf("s[%d] = %c => %c\n", i, s[i], lower(s[i]));
        s[i] = lower(s[i]);
    }

    printf("s = %s\n", s);
}

int
lower(int c)
{
    return (c >= 'A' && c <= 'Z') ? (c + 'a' - 'A'):c;
}
