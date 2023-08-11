#include <stdio.h>

int main()
{
    int n, i, a = 0, b = 1, c = 0;
    printf("Enter the number of terms: ");
    scanf("%d", &n);
    printf("The Fibonacci series is: ");
    for (i = 0; i < n; i++) {
        printf("%d ", a);
        c = a + b;
        a = b;
        b = c;
    }
    printf("\nThe sum of the Fibonacci series is: %d", c);
    return 0;
}