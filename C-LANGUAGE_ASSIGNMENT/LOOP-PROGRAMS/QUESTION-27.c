//27. Series: 1/2 - 2/3 + 3/4 - 4/5 + ... + n

#include <stdio.h>

int main() {
    int n, i;
    float sum = 0;

    printf("Enter n: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++) {
        if (i % 2 == 0)
            sum -= (float)i / (i + 1);
        else
            sum += (float)i / (i + 1);
    }

    printf("Sum = %.2f", sum);
    return 0;
}

