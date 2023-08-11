#include <stdio.h>
#include <stdlib.h>

int main()
{
    int arr[] = {1, 2, 3, 4, 5, 5, 6, 7, 8, 9, 9};
    int n = sizeof(arr) / sizeof(arr[0]);
    int freq[10] = {0};
    for (int i = 0; i < n; i++) {
        freq[arr[i]]++;
    }
    for (int i = 0; i < 10; i++) {
        if (freq[i] > 1) {
            printf("The number %d is repeated %d times\n", i, freq[i]);
        }
    }
    return 0;
}