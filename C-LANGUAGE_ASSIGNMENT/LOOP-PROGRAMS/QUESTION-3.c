// 3. Input 10 numbers – Even/Odd count & sum

#include <stdio.h>

int main() {
    int i, n, even = 0, odd = 0, sumEven = 0, sumOdd = 0;

    for (i = 1; i <= 10; i++) {
        printf("Enter number %d: ", i);
        scanf("%d", &n);

        if (n % 2 == 0) {
            even++;
            sumEven += n;
        } else {
            odd++;
            sumOdd += n;
        }
    }

    printf("\nEven count = %d", even);
    printf("\nOdd count = %d", odd);
    printf("\nSum of Even numbers = %d", sumEven);
    printf("\nSum of Odd numbers = %d", sumOdd);

    return 0;
}

