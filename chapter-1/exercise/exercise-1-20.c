// Exercise 1-20
// Write a program 'detab' that replaces tabs in the input with the proper
// number of blanks to space to the next tab stop. Assume a fixed set of tab
// stops, say every n columns. Should n be a variable or a symbolic parameter?
#include <stdio.h>

#define MAXLINE     1000    /* maximum input line size */
#define N_TAB_COLUMN  4     /* number of blanks space to replace tab */

int detab(char line[]);

main()
{
    char line[1000];         /* current line */

    while(detab(line) != 0) {
        printf("%s", line);
    }
}

/* detab: replace tabs with N_TAB_COLUMN blank spaces */
int detab(char line[])
{
    int c, i, n;

    i = 0;
    while((c = getchar()) != EOF && c != '\n' && i < (MAXLINE - 1)) {
        if(c == '\t') {
            for(n = 0; n < N_TAB_COLUMN; ++n)
                line[i+n] = ' ';
            i += N_TAB_COLUMN;
        } else {
            line[i] = c;
            ++i;
        }
    }
    if(c == '\n') {
        line[i] = c;
        ++i;
    }
    line[i] = '\0';
    return i;
}
