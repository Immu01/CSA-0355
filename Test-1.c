#include <stdio.h>
int main()
{
    int a[] = {38, 44, 63, -51, -35, 19, 94, -69, 4, -46};
    int n = sizeof(a) / sizeof(a[0]);
    int min_diff = 10000000;
    int i, j;
    for (i = 0; i < n; i++) {
        for (j = i + 1; j < n; j++) {
            if (abs(a[i] + a[j]) < min_diff) {
                min_diff = abs(a[i] + a[j]);
            }
        }
    }
    printf("The two elements whose sum is closest to zero are %d and %d", a[i], a[j]);
    return 0;
}