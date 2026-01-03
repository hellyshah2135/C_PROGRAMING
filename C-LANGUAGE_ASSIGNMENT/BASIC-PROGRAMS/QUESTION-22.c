// 22. Compound Interest (Given Formula)

#include <stdio.h>
#include <math.h>

int main() {
    float p, r, t, amount, ci;
    printf("Enter P, R, T: ");
    scanf("%f %f %f", &p, &r, &t);

    amount = p * pow((1 + r/100), t);
    ci = amount - p;

    printf("Compound Interest: %.2f\n", ci);
    return 0;
}

