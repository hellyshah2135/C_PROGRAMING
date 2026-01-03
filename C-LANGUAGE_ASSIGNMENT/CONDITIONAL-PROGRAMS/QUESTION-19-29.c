// Q19. Electricity Bill Calculation

#include <stdio.h>

int main() {
    int id, units;
    char name[50];
    float bill = 0, surcharge = 0;

    printf("Enter Customer ID: ");
    scanf("%d", &id);
    printf("Enter Customer Name: ");
    scanf("%s", name);
    printf("Enter Units Consumed: ");
    scanf("%d", &units);

    if (units <= 350)
        bill = units * 1.20;
    else if (units < 600)
        bill = (350 * 1.20) + (units - 350) * 1.50;
    else if (units < 800)
        bill = (350 * 1.20) + (250 * 1.50) + (units - 600) * 1.80;
    else
        bill = (350 * 1.20) + (250 * 1.50) + (200 * 1.80) + (units - 800) * 2.00;

    if (bill > 800)
        surcharge = bill * 0.18;

    bill += surcharge;

    if (bill < 256)
        bill = 256;

    printf("\nCustomer ID: %d", id);
    printf("\nName: %s", name);
    printf("\nTotal Bill: Rs. %.2f", bill);

    return 0;
}

