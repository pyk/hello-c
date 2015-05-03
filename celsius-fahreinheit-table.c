#include <stdio.h>

main()
{
    float fahr, celsius;
    int lower, upper, step;

    lower = 0;      // lower limit of temprature table
    upper = 300;    // upper limit
    step = 20;      // step size

    celsius = lower;
    printf("C\tF\n");
    while (celsius <= upper) {
        fahr = ((9.0/5.0) * celsius)+32.0;
        printf("%.0f\t%.1f\n", celsius, fahr);
        celsius += step;
    }
}