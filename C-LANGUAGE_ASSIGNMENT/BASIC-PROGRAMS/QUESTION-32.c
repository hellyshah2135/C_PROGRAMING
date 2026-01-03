// 32. Accept 2 Numbers, Find Sum and Check Size

#include <stdio.h>

int main() {
    int a, b;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    printf("Sum: %d\n", a + b);
    printf("Size of int: %lu bytes\n", sizeof(int));
    return 0;
}

