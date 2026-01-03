// 10. Sum of first and last digit

#include <stdio.h>

int main() {
    int n, first, last;

    printf("Enter number: ");
    scanf("%d", &n);

    if (n < 0)
        n = -n;

    last = n % 10;
    while (n >= 10) {
        n /= 10;
    }
    first = n;

    printf("Sum of first and last digit = %d", first + last);
    return 0;
}

