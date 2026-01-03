// 5. Check Number Is Positive or Negative

#include <stdio.h>

int main() {
    int n;
    printf("Enter number: ");
    scanf("%d", &n);

    if (n > 0)
        printf("Positive Number");
    else
        printf("Negative Number");

    return 0;
}

