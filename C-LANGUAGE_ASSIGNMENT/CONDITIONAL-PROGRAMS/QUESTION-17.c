// 17. Check if triangle can be formed using angles

#include <stdio.h>

int main() {
    int a, b, c;
    printf("Enter three angles: ");
    scanf("%d %d %d", &a, &b, &c);

    if (a + b + c == 180 && a > 0 && b > 0 && c > 0)
        printf("Triangle can be formed");
    else
        printf("Triangle cannot be formed");

    return 0;
}

