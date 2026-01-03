//30. Convert Years into Days and Days into Years

#include <stdio.h>

int main() {
    int years, days;
    printf("Enter years: ");
    scanf("%d", &years);
    printf("Days: %d\n", years * 365);

    printf("Enter days: ");
    scanf("%d", &days);
    printf("Years: %d\n", days / 365);

    return 0;
}



