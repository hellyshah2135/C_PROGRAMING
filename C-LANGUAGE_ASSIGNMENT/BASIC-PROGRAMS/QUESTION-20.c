// 20. Deduct Insurance and Loan from Salary

#include <stdio.h>

int main() {
    float salary, remaining;
    printf("Enter monthly salary: ");
    scanf("%f", &salary);

    remaining = salary - (salary * 0.20);
    printf("Remaining Salary: %.2f\n", remaining);
    return 0;
}

