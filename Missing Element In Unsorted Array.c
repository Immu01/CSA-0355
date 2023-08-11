#include <stdio.h>

int main()
{
    int arr[] = {1, 2, 3, 4, 6, 7, 8, 9, 10};

    int n = sizeof(arr) / sizeof(arr[0]);

    int missing = -1;

    for (int i = 0; i < n; i++) {

        if (arr[i] != i + 1) {

            missing = i + 1;
            break;
        }
    }

    printf("The missing element is %d\n", missing);

    return 0;
}