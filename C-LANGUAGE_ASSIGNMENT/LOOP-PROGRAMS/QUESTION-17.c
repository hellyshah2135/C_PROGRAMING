//17. Accept 5 numbers and count even & odd (while loop)

#include <stdio.h>

int main() {
    int i = 1, n, even = 0, odd = 0;

    while (i <= 5) {
        printf("Enter number %d: ", i);
        scanf("%d", &n);

        if (n % 2 == 0)
            even++;
        else
            odd++;

        i++;
    }

    printf("Even count = %d\nOdd count = %d", even, odd);
    return 0;
}

