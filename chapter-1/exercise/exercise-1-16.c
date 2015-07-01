// Exercise 1-16
// Revise the main routine of the longest-line program so it will correctly
// input lines, and as much as possible of the text.
#include <stdio.h>
#define MAXLINE 1000    /* maximum input line size */

int mgetline(char line[], int maxline);
void copy(char to[], char from[]);

/* print longest input line */
main()
{
    int len;        /* current line length*/
    int max;        /* maximum length seen so far */
    char line[MAXLINE];     /* current input line */
    char longest[MAXLINE];  /* longest line saved here */

    max = 0;
    while ((len = mgetline(line, MAXLINE)) > 0) {
        if (len > max) {
            max = len;
            copy(longest, line);
        }
    }
    if (max > 0)
        printf("the length of long input line: %d\n", max);
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

/* copy: copy 'from' into 'to'; assume to is big enough */
void copy(char to[], char from[])
{
    int i;

    i = 0;
    while ((to[i] = from[i]) != '\0')
        ++i;
}
