// 26. Convert Fahrenheit to Celsius

#include <stdio.h>

int main() {
    float f;
    printf("Enter Fahrenheit: ");
    scanf("%f", &f);

    printf("Celsius: %.2f\n", (f - 32) * 5 / 9);
    return 0;
}

