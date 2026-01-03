// 12. Maximum among 3 numbers using ternary

#include <stdio.h>

int main() {
    int a, b, c;
    printf("Enter three numbers: ");
    scanf("%d %d %d", &a, &b, &c);

    int max = (a > b) ? (a > c ? a : c) : (b > c ? b : c);
    printf("Maximum: %d", max);

    return 0;
}

