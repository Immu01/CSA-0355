#include <stdio.h>

int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int n = sizeof(arr) / sizeof(arr[0]);

    for (int i = 0; i < n; i++) {

        if (arr[i] % 2 != 0) {

            printf("Odd element: %d\n", arr[i]);
        }
    }

    for (int i = 0; i < n; i++) {

        if (arr[i] % 2 == 0) {

            printf("Even element: %d\n", arr[i]);
        }
    }

    return 0;
}