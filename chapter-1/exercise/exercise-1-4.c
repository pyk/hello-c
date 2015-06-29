// Exercise 1-4
// Write a program to print corresponding Celcius to Fahrenheit table.
#include <stdio.h>

main()
{
    float fahr, celsius;
    int lower, upper, step;

    lower = 0;      // lower limit of temprature table
    upper = 300;    // upper limit
    step = 20;      // step size

    celsius = lower;
    printf("celsius\tfahr\n");
    while (celsius <= upper) {
        fahr = ((9.0/5.0) * celsius)+32.0;
        printf("%3.0f\t%6.2f\n", celsius, fahr);
        celsius += step;
    }
}
