// Exercise 1-9
// Write a program to copy its input to its output, replacing each
// string of one or more blanks by single blank.
#include <stdio.h>

main()
{
    int c;
    // blank is used to track the squence of blanks
    int blank;
    blank = 0;
    while((c = getchar()) != EOF) {
        if (c == ' ')
        {
            blank += 1;
            // if blanks detected more than 2 appear in squence
            // delete/ignore another blanks that inserted.
            if (blank >= 2)
            {
                c -= ' ';
            }
        } 
        else {
            // blank not appear in squence, netralize the blank tracker.
            blank = 0;
        }
        putchar(c);
    }
}