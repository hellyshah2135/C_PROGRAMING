// 13. Minimum among 3 numbers using ternary

#include <stdio.h>

int main() {
    int a, b, c;
    printf("Enter three numbers: ");
    scanf("%d %d %d", &a, &b, &c);

    int min = (a < b) ? (a < c ? a : c) : (b < c ? b : c);
    printf("Minimum: %d", min);

    return 0;
}

