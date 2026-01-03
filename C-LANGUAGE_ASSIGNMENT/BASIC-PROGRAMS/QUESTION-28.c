// 28. Convert Years into Days and Months

#include <stdio.h>

int main() {
    int years;
    printf("Enter years: ");
    scanf("%d", &years);

    printf("Days: %d\n", years * 365);
    printf("Months: %d\n", years * 12);
    return 0;
}

