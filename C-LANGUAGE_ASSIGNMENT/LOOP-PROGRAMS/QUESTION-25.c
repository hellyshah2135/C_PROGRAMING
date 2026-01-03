// 25. Series: (1×1) + (2×2) + ... + (n×n)

#include <stdio.h>

int main() {
    int n, i, sum = 0;

    printf("Enter n: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++) {
        sum += i * i;
    }

    printf("Sum = %d", sum);
    return 0;
}

