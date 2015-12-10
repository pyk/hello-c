/* Exercise 3-1
 * Our binary search (3-3-0-binary-search-array.c) makes two tests inside the
 * loop, when one would suffice (at the price of more tests outside). Write
 * a version with only one test inside the loop and measure the difference
 * in run-time. */
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
        
        if(x == arr[mid]) {
            return x;
        }
        
        if(x < arr[mid]) {
            high = mid - 1;
        }

        if (x > arr[mid]) {
            low = mid + 1;
        }
    }
    return -1; /* no match */
}