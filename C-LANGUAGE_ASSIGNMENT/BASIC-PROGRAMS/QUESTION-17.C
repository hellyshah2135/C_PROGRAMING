// 17. Calculate person’s insurance premium based on salary

#include <stdio.h>

int main() {
    float salary, premium;
    printf("Enter salary: ");
    scanf("%f", &salary);

    premium = salary * 0.10;
    printf("Insurance Premium: %.2f\n", premium);
    return 0;
}

