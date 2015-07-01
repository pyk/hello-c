// Exercise 1-18
// Write a pogram to remove trailing blanks and tabs from each line of input,
// and to delete entirely blank lines.
#include <stdio.h>
#define MAXLINE 1000    /* maximum input line size */

int modify_line(char line[], int maxline);

/* print longest input line */
main()
{
    int len;            /* current line length*/
    char line[MAXLINE]; /* current input line */

    while ((len = modify_line(line, MAXLINE)) > 0) {
        printf("%s", line);
    }
    return 0;
}

/* modify_line: remove trailing blanks, tabs & entirely blank lines; read line
 * into line, return length */
int modify_line(char line[], int maxline)
{
    int c, i, trailing;

    trailing = 0;
    for(i = 0; i < maxline-1 && (c = getchar()) != EOF && c != '\n'; ++i) {
        if (c == ' ')
            ++trailing;
        else
            trailing = 0;
        if ( c != '\t' && trailing < 2 )
            line[i] = c;
    }

    if (c == '\n') {
        if ( i > 1 )
            line[i] = c;
        ++i;
    }
    line[i] = '\0';
    return i;
}
