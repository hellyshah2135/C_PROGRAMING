// 15. Sum of 10 numbers using while loop

#include <stdio.h>

int main() {
    int i = 1, n, sum = 0;

    while (i <= 10) {
        printf("Enter number %d: ", i);
        scanf("%d", &n);
        sum += n;
        i++;
    }

    printf("Sum = %d", sum);
    return 0;
}

