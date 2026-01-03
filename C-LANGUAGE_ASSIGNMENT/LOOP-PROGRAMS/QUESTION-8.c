// 8. Find maximum digit in a number

#include <stdio.h>

int main() {
    int n, digit, max = 0;

    printf("Enter number: ");
    scanf("%d", &n);

    if (n < 0)
        n = -n;

    while (n != 0) {
        digit = n % 10;
        if (digit > max)
            max = digit;
        n /= 10;
    }

    printf("Maximum digit = %d", max);
    return 0;
}

