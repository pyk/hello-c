// Exercise 1-21
// Write a program 'entab' that replaces strings of blanks by the minimum
// number of tabs and blanks to achieve the same spacing. Use the same tab stops
// as for 'detab'. When either a tab or a single blank would suffice to reach a
// tab stop, which would br given preference?
#include <stdio.h>

#define MAXLINE     1000    /* maximum input line size */
#define N_TAB_COLUMN  4     /* number of blank spaces to be replaced with tab */

int entab(char line[]);

main()
{
    char line[1000];         /* current line */

    while(entab(line) != 0) {
        printf("%s", line);
    }
}

/* entab: replace N_TAB_COLUMN blanks with tab */
int entab(char line[])
{
    int c, i, n, nblank;

    i = 0;
    nblank = 0;
    while((c = getchar()) != EOF && c != '\n' && i < (MAXLINE - 1)) {
        if(c == ' ')
            ++nblank;
        if(nblank == N_TAB_COLUMN) {
            line[i - (N_TAB_COLUMN - 1)] = '\t';
            nblank = 0;
            i -= (N_TAB_COLUMN-1);
        }
        line[i] = c;
        ++i;
    }
    if(c == '\n') {
        line[i] = c;
        ++i;
    }
    line[i] = '\0';
    return i;
}
