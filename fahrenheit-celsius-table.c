#include <stdio.h>

// Print Fahrenheit-Celsius table
main()
{
    float fahr, celsius;
    int lower, upper, step;

    lower = 0;      // lower limit of temprature table
    upper = 300;    // upper limit
    step = 20;      // step size

    fahr = lower;
    printf("F\tC\n");
    while (fahr <= upper) {
        celsius = (5.0/9.0) * (fahr-32.0);
        printf("%.0f\t%.1f\n", fahr, celsius);
        fahr += step;
    }
}