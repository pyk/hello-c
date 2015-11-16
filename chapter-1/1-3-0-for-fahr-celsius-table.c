/* Section 1.3 - The for statement */
#include <stdio.h>

/* print Fahrenheit-Celcius table using `for` statement */
main()
{
    int fahr;
    for (fahr = 0; fahr <= 300; fahr += 20)
        printf("%3d %6.2f\n", fahr, (5.0/9.0)*(fahr-32.0));
}
