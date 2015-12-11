/* Section 3.5 - Loops (while & for) */
#include <stdio.h>
#include <ctype.h>
#include <string.h>

int matoi(char s[]);
void shellsort(int v[], int n);
void reverse(char s[]);

int main() {
    /* string to integer */
    char *num = "-890";
    printf("%d\n", matoi(num));

    /* sort array */
    int arr[10] = {4, 5, 1, 3, 6, 12, 4, 89, 34, 68};
    int i = 0;
    for(i = 0; i < 10; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    shellsort(arr, 10);
    for(i = 0; i < 10; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    /* Reverse string */
    char str[6] = {'h', 'e', 'l', 'l', 'o', '\0'};
    printf("%s\n", str);
    reverse(str);
    printf("%s\n", str);
}

/* matoi: convert S to integer; version 2 */
int matoi(char s[])
{
    int i, n, sign;

    /* Skip the whitespace */
    for(i = 0; isspace(s[i]); i++)
        ;

    sign = (s[i] == '-') ? -1:1;

    /* Skip sign */
    if(s[i] == '+' || s[i] == '-')
        i++;
    for(n = 0; isdigit(s[i]); i++)
        n = 10 * n + (s[i] - '0');

    return sign * n;
}

/* shellsort: short v[0]...v[n-1] into increasing order */
void shellsort(int v[], int n)
{
    int gap, i, j, temp;

    for(gap = n/2; gap > 0; gap /= 2)
        for(i = gap; i < n; i++)
            for(j=i-gap; j >= 0 && v[j] > v[j+gap]; j -= gap) {
                temp = v[j];
                v[j] = v[j+gap];
                v[j+gap] = temp;
            }
}

/* resverse: reverse string S in place */
void reverse(char s[])
{
    int c, i, j;

    for(i = 0, j = strlen(s) - 1; i < j; i++, j--) {
        c = s[i];
        s[i] = s[j];
        s[j] = c;
    }
}