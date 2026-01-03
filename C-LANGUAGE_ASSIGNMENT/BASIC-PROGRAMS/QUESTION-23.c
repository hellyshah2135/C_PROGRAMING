// 23. Swap Using Multiplication and Division

#include <stdio.h>

int main() {
    int a, b;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    a = a * b;
    b = a / b;
    a = a / b;

    printf("After Swap: %d %d\n", a, b);
    return 0;
}

