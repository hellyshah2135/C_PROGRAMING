// 14. Accept 5 numbers and find factorial of each

#include <stdio.h>

int main() {
    int i, n, j;
    long fact;

    for (i = 1; i <= 5; i++) {
        printf("Enter number %d: ", i);
        scanf("%d", &n);

        fact = 1;
        for (j = 1; j <= n; j++) {
            fact *= j;
        }

        printf("Factorial = %ld\n", fact);
    }
    return 0;
}

