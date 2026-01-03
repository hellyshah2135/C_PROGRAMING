// 8. Categorize person according to height

#include <stdio.h>

int main() {
    int height;
    printf("Enter height in cm: ");
    scanf("%d", &height);

    if (height < 150)
        printf("Dwarf");
    else if (height < 165)
        printf("Average Height");
    else if (height < 180)
        printf("Tall");
    else
        printf("Very Tall");

    return 0;
}

