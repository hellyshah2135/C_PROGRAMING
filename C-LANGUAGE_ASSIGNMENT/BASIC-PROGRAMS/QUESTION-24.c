// 24. Accept 5 Employees Name and Salary

#include <stdio.h>

int main() {
    int i;
    float salary, total = 0;
    char name[20];

    for(i = 1; i <= 5; i++) {
        printf("Enter name and salary: ");
        scanf("%s %f", name, &salary);
        total += salary;
    }

    printf("Total Salary: %.2f\n", total);
    printf("Average Salary: %.2f\n", total / 5);
    return 0;
}

