/*  Section 1.2 - Variables and Arithmetic Expressions */
#include <stdio.h>

/*  Print Fahrenheit-Celsius table
    for far = 0, 20, ..., 300; floating point version */
main()
{
    float fahr, celsius;
    int lower, upper, step;

    lower = 0;      /* lower limit of temperature table */
    upper = 300;    /* upper limit */
    step = 20;      /* step size */

    fahr = lower;
    while (fahr <= upper) {
        celsius = (5.0/9.0) * (fahr-32.0);
        printf("%3.0f\t%6.2f\n", fahr, celsius);
        fahr = fahr + step;
    }
}
