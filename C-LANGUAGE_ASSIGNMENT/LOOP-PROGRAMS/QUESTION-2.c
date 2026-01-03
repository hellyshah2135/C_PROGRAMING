// 2. Accept 5 numbers and display them

#include <stdio.h>

int main() {
    int a[5], i;

    for (i = 0; i < 5; i++) {
        printf("Enter number %d: ", i + 1);
        scanf("%d", &a[i]);
    }

    printf("Entered numbers are:\n");
    for (i = 0; i < 5; i++) {
        printf("%d ", a[i]);
    }
    return 0;
}

