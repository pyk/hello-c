// Exercise 1-15
// Rewrite the temprature conversion program of Section 1.2 to use a function
// for conversion
#include <stdio.h>

// celcius function
float celcius(float fahr);

// print fahrenheit-celcius table using `for` statement
main()
{
    int fahr;
    for (fahr = 0; fahr <= 300; fahr += 20)
    {
        printf("%3d %6.1f\n", fahr, celcius(fahr));
    }
}

float celcius(float fahr) {
    return (5.0/9.0) * (fahr - 32.0);
}
