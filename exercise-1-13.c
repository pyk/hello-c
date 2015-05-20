// Exercise 1-13
// Write a program to print a histogram of the lengths of words in its input.
#include <stdio.h>

main()
{
    int c, i, nwords;
    nwords = 0;
    while((c = getchar()) != EOF) {
        // increase nwords if any space, new line or tab
        if(c == ' ' || c == '\n' || c == '\t') {
            ++nwords;
        }
    }

    // print the histogram
    printf("Words: ");
    for (i = 1; i <= nwords; i++) {
        printf("#");
    }
    printf("\n");
}
