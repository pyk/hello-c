/* Exercise 2-2
 * Write a loop equivalent to the for loop above without using && or ||.*/
#include <stdio.h>

#define MAXCHAR 10

int
main()
{
    int i, lim, c;
    char s[MAXCHAR];

    i = 0;
    lim = MAXCHAR;
    while((c = getchar()) != EOF) {
        if(i<lim-1)
            if(c != '\n')
                s[i] = c;
        ++i;
    }
    printf("%s", s);
}
