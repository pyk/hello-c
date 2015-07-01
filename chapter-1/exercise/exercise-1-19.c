// Exercise 1-19
// Write a function 'reverse(s)' that reverses the character string s. Use it to
// write a program that reverses its input a line at a time.
#include <stdio.h>
#define MAXLINE 1000    /* maximum input line size */

int mgetline(char line[], int maxline);
void reverse(char reversed_line[], char line[], int len);

/* print longest input line */
main()
{
    int len;                        /* current line length*/
    char line[MAXLINE];             /* current input line */
    char reversed_line[MAXLINE];    /* reversed line */
    while ((len = mgetline(line, MAXLINE)) > 0) {
        reverse(reversed_line, line, len);
        printf("%s", reversed_line);
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

/* reverse: reverse a line to reversed_line */
void reverse(char reversed_line[], char line[], int len)
{
    int i;
    for(i = 0; i < len; i++)
        reversed_line[i] = line[(len-1)-i];
}
