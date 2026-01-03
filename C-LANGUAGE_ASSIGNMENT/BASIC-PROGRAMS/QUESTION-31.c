// 31. Convert Kilometers into Meters

#include <stdio.h>

int main() {
    float km;
    printf("Enter kilometers: ");
    scanf("%f", &km);

    printf("Meters: %.2f\n", km * 1000);
    return 0;
}

