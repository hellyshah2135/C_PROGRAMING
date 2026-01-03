// 33. Read Integer and Print First Three Powers

#include <stdio.h>

int main() {
    int n;
    printf("Enter number: ");
    scanf("%d", &n);

    printf("N^1 = %d\n", n);
    printf("N^2 = %d\n", n * n);
    printf("N^3 = %d\n", n * n * n);
    return 0;
}

