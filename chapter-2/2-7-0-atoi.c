/* Section 2.7 - Type conversions */
#include <stdio.h>

int atoi(char s[]);

int
main()
{
    char s[6] = {'h', 'e', 'l', 'l', 'o', '\0'};
    printf("atoi(\"hello\"): %d\n", atoi(s));

    char s2[4] = {'5', '5', '0', '\0'};
    printf("atoi(\"h55l0\"): %d\n", atoi(s2));
}

/* atoi: convert s to integer */
int
atoi(char s[])
{
    printf("\nprocess: %s\n", s);
    int i, n;

    n = 0;
    for(i = 0; s[i] >= '0' && s[i] <= '9'; i++) {
        printf("n = 10 * %d + (%d - %d)\n", n, s[i], '0');
        n = 10 * n + (s[i] - '0');
        printf("n = %d\n\n", n);
    }
    return n;
}
