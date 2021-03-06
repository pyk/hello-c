/* Section 1.4 - Symolic constant */
#include <stdio.h>

#define LOWER   0   /* lower limit of table */
#define UPPER   300 /* upper limit */
#define STEP    20  /* step size */

main()
{
    int fahr;
    printf("fahr\tcelsius\n"); // heading
    for(fahr = LOWER; fahr <= UPPER; fahr += STEP){
        printf("%3d\t%6.2f\n", fahr, (5.0/9.0) * (fahr-32.0));
    }
}
