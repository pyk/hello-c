/* Section 1.8 - Call by value */
#include <stdio.h>

int power(int base, int n);

main() {
    printf("4^6 = %d\n", power(4,6));
}

/* power: raise base to n-th power; n >= 0; version 2 */
int power(int base, int n) {
    int p;
    for(p = 1; n > 0; n--)
        p = p * base;
    return p;
}
