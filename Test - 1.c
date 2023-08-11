#include <stdio.h>
int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int n = sizeof(arr) / sizeof(arr[0]);
    int i, j, count;
    int freq[10] = {0};
    for (i = 0; i < n; i++) {
        count = 1;
        for (j = i + 1; j < n; j++) {
            if (arr[i] == arr[j]) {
                count++;
                freq[arr[i]] = count;
            }
        }
    }
    for (i = 0; i < n; i++) {
        printf("The frequency of %d is %d\n", arr[i], freq[arr[i]]);
    }
    return 0;
}