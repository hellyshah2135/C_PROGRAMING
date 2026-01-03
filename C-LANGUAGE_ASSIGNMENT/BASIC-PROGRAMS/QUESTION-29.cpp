//29. Convert Minutes into Seconds and Hours

#include <stdio.h>

int main() {
    int min;
    printf("Enter minutes: ");
    scanf("%d", &min);

    printf("Seconds: %d\n", min * 60);
    printf("Hours: %d\n", min / 60);
    return 0;
}

