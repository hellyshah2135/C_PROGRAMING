// 1. Check whether two integers are equal or not

#include <stdio.h>

int main() {
    int a, b;
    printf("Enter two integers: ");
    scanf("%d %d", &a, &b);

    if (a == b)
        printf("Both numbers are equal");
    else
        printf("Numbers are not equal");

    return 0;
}



