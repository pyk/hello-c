#include <stdio.h>

// count line in input
main() {
    int c, nl;

    nl = 0;
    while((c = getchar()) != EOF) {
        if (c == '\n')
            ++nl;
    }
    printf("%d\n", nl);
}
