/* Exercise 2-5
 * Write the function 'any(s1,s2)', which returns the first location in the string
 * 's1' where any character from the string 's2' occurs, or -1 if 's1' contains
 * no characters form 's2'. */
#include <stdio.h>

int any(char s1[], char s2[]);

int
main()
{
    int i;
    char s1[6] = "hello";
    char s2[4] = "hay";

    printf("%d\n", any(s1,s2));
}

/* any: return the first location in the 's1' where any character from 's2'
 * occurs */
int
any(char s1[], char s2[])
{
    int i, j;

    for(i = 0; s1[i] != '\0'; i++)
        for(j = 0; s2[j] != '\0'; j++)
            if(s1[i] == s2[j])
                return i;
}
