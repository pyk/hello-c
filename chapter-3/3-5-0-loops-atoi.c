/* Section 3.5 - Loops (while & for) */
#include <stdio.h>
#include <ctype.h>

int matoi(char s[]);

int main() {
    char *num = "-890";
    printf("%d\n", matoi(num));
}

/* matoi: convert S to integer; version 2 */
int matoi(char s[])
{
    int i, n, sign;

    /* Skip the whitespace */
    for(i = 0; isspace(s[i]); i++)
        ;

    sign = (s[i] == '-') ? -1:1;

    /* Skip sign */
    if(s[i] == '+' || s[i] == '-')
        i++;
    for(n = 0; isdigit(s[i]); i++)
        n = 10 * n + (s[i] - '0');

    return sign * n;
}