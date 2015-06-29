// Exercise 1-14
// Write a program to print a histogram of the frequencies of different
// characters in its input
#include <stdio.h>

#define N_CHAR  26  // total characters from a-z, ignore case-sensitive
#define A_ASCII 97  // ascii decimal value of 'a'

main()
{
    int i, c, nhist[N_CHAR], nc;
    char ch;

    // initialize histogram
    for(i = 0; i < N_CHAR; i++) {
        nhist[i] = 0;
    }

    while((c = getchar()) != EOF) {
        // ASCII character a-z is 97-122
        if(c >= 'a' && c <= 'z')
            ++nhist[c - A_ASCII];
    }
    for(i = 0; i < N_CHAR; i++) {
        ch = (char)(i+A_ASCII);
        printf("%c: ", ch);
        nc = 1;
        while(nc <= nhist[i]) {
            printf("#");
            nc++;
        }
        printf("\n");
    }
}

