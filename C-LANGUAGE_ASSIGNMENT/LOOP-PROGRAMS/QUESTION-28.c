//28. Series: 1 2 3 6 9 18 27 54 ..

#include <stdio.h>

int main() {
    int n, i;
    int a = 1;

    printf("Enter number of terms: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++) {
        printf("%d ", a);
        if (i % 2 == 1)
            a *= 2;
        else
            a *= 3;
    }
    return 0;
}

