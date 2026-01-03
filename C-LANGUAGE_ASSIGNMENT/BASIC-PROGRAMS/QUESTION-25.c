// 25. Accept 5 Expenses and Find Average

#include <stdio.h>

int main() {
    float exp, total = 0;
    int i;

    for(i = 1; i <= 5; i++) {
        printf("Enter expense: ");
        scanf("%f", &exp);
        total += exp;
    }

    printf("Average Expense: %.2f\n", total / 5);
    return 0;
}

