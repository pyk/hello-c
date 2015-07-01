// Exercise 1-17
// Write a pogram to print all input lines that are longer than 80 characters.
#include <stdio.h>
#define MAXLINE 1000    /* maximum input line size */

int mgetline(char line[], int maxline);

/* print longest input line */
main()
{
    int len;        /* current line length*/
    char line[MAXLINE];     /* current input line */

    while ((len = mgetline(line, MAXLINE)) > 0) {
        if (len > 80)
            printf("%s", line);
    }
    return 0;
}

/* mgetline: read line into line , return length */
int mgetline(char line[], int maxline)
{
    int c, i;

    for(i = 0; i < maxline-1 && (c = getchar()) != EOF && c != '\n'; ++i)
        line[i] = c;
    if (c == '\n') {
        line[i] = c;
        ++i;
    }
    line[i] = '\0';
    return i;
}
