// 22. Accept 3 numbers and check palindrome (while loop)

#include <stdio.h>

int main() {
    int i = 1, n, rev, temp;

    while (i <= 3) {
        printf("Enter number %d: ", i);
        scanf("%d", &n);

        temp = n;
        rev = 0;

        while (temp != 0) {
            rev = rev * 10 + temp % 10;
            temp /= 10;
        }

        if (rev == n)
            printf("Palindrome\n");
        else
            printf("Not Palindrome\n");

        i++;
    }
    return 0;
}

