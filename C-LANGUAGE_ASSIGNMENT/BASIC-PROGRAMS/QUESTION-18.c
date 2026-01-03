// 18. Calculate person’s Annual Salary

#include <stdio.h>

int main() {
    float monthly;
    printf("Enter monthly salary: ");
    scanf("%f", &monthly);

    printf("Annual Salary: %.2f\n", monthly * 12);
    return 0;
}

