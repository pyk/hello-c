/* Exercise 2-4
 * Write an alternate version of 'squeeze(s1,s2)' that deletes each character in
 * s1 that matches any character in the string s2 */
#include <stdio.h>

void squeeze(char s1[], char s2[]);

int
main()
{
    char s1[6] = {'H', '3', 'L', 'l', '4', '\0'};
    char s2[3] = {'3', 'L', '\0'};
    printf("before: %s\n", s1);
    squeeze(s1, s2);
    printf("after: %s\n", s1);
}

/* squeeze: delete each chaaracter in s1 that matches any character in the
 * string s2 */
void
squeeze(char s1[], char s2[])
{
    int i, j, n;

    /* find character that matches */
    for(i = 0; s2[i] != '\0'; i++) {
        for(j = n = 0; s1[j] != '\0'; j++) {
            printf("%c %c\n", s2[i], s1[j]);
            if(s2[i] != s1[j]) {
                printf("not match!. replace s1[%d] = %c\n", n, s1[j]);
                s1[n++] = s1[j];
            }
        }
        s1[n] = '\0';
    }
}
