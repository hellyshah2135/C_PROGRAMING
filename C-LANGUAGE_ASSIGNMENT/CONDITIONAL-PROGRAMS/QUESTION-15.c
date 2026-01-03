// 15. Eligibility for Professional Course

#include <stdio.h>

int main() {
    int phy, chem, math, total, mp_total;

    printf("Enter Physics marks: ");
    scanf("%d", &phy);
    printf("Enter Chemistry marks: ");
    scanf("%d", &chem);
    printf("Enter Mathematics marks: ");
    scanf("%d", &math);

    total = phy + chem + math;
    mp_total = math + phy;

    if ((math >= 65 && phy >= 55 && chem >= 50 && total >= 190) ||
        (mp_total >= 140))
        printf("The candidate is eligible.");
    else
        printf("The candidate is not eligible.");

    return 0;
}

