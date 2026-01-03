// 16. Sum of Natural Numbers using while loop

#include <stdio.h>

int main() {
    int n, sum = 0, i = 1;

    printf("Enter limit: ");
    scanf("%d", &n);

    while (i <= n) {
        sum += i;
        i++;
    }

    printf("Sum of natural numbers = %d", sum);
    return 0;
}

