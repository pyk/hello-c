/* Exercise 2-3
 * Write the function htoi(s), which converts a string of hexadecimal digits
 * (including an optional 0x or 0X) into its equivalent integer value. The
 * allowable digits are 0 through 9, a through f and A through F. */
#include <stdio.h>

#define BASEHXINT 30

int htoi(char s[]);

int
main()
{
    int n;
    char s[] = "0x30";
    n = htoi(s);
    printf("%s\n", n);
}

int
htoi(char s[]) {
    int i;

    i = 0;
    while(s[i] != '\0') {

        ++i;
    }
}
