/* Exercise 2-1
 * Write a program to determine the ranges of 'char', 'short', 'int', and 'long'
 * variables, both signed and unsigned, by printing appropriate values from
 * standart headers and by direct computation. Harder if you compute them:
 * determine the ranges of various floating-point types. */
#include <stdio.h>
#include <limits.h>
#include <float.h>

main()
{
    printf("signed char\tmax %12d\tmin %12d\n", SCHAR_MIN, SCHAR_MAX);
    printf("unsigned char\tmax %12d\tmin %12d\n", UCHAR_MAX, 0);
    printf("signed short\tmax %12d\tmin %12d\n", SHRT_MAX, SHRT_MIN);
    printf("unsigned short\tmax %12d\tmin %12d\n", USHRT_MAX, 0);
    printf("signed int\tmax %12d\tmin %12d\n", INT_MAX, INT_MIN);
    printf("unsigned int\tmax %12d\tmin %12d\n", UINT_MAX, 0);
    printf("signed long\tmax %12ld\tmin %12ld\n", LONG_MAX, LONG_MIN);
    printf("unsigned long\tmax %12ld\tmin %12d\n", ULONG_MAX, 0);

    printf("float\tmax %12f\tmin %12f\n", FLT_MAX, FLT_MIN);
    printf("double\tmax %12f\tmin %12f\n", DBL_MAX, DBL_MIN);
}
