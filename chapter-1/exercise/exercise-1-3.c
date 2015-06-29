// Exercise 1-3
// Modify the temprature conversion program to print a heading above the table.
#include <stdio.h>

// print fahrenheit-celsius table
main()
{
    float fahr, celsius;
    int lower, upper, step;

    lower = 0;      // lower limit of temperature table
    upper = 300;    // upper limit
    step = 20;      // step size

    fahr = lower;
    printf("fahr\tcelsius\n"); // heading
    while (fahr <= upper) {
        celsius = (5.0/9.0) * (fahr-32.0);
        printf("%3.0f\t%6.2f\n", fahr, celsius);
        fahr = fahr + step;
    }
}
