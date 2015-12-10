/* Section 3.3 - Else-If control flow */
#include <stdio.h>
#include <assert.h>

int binsearch(int x, int arr[], int n);

int main(int argc, char **argv) 
{
    /* ordered array arr */
    int arr[10] = {1, 4, 6, 56, 57, 58, 78, 90, 91, 99};

    int x = 1;
    assert(binsearch(x, arr, 10) == 1);
    
    int y = 100;
    assert(binsearch(y, arr, 10) == -1);
}

/* binsearch: find x in v[0] <= v[1] <= ... <= v[n-1],
 * return x if x is found, otherwise -1. */
int binsearch(int x, int arr[], int n)
{
    int low, high, mid;
    low = 0;
    high = n -1;
    while(low <= high) {
        mid = (low+high) / 2;
        if(x < arr[mid]) {
            high = mid - 1;
        } else if (x > arr[mid]) {
            low = mid + 1;
        } else {
            /* found match */
            return x;
        }
    }
    return -1; /* no match */
}