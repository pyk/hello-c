#include <stdio.h>

// count character in input; 2nd version
// 1st version available on previous commit
main()
{
    double nc;

    for(nc = 0; getchar() != EOF; ++nc){}
    printf("%.0f\n", nc);
}