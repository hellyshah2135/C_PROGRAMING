// 5. Compare two strings without library functions

#include <stdio.h>

int main() {
    char s1[50], s2[50];
    int i = 0, flag = 0;

    printf("Enter first string: ");
    gets(s1);
    printf("Enter second string: ");
    gets(s2);

    while (s1[i] != '\0' || s2[i] != '\0') {
        if (s1[i] != s2[i]) {
            flag = 1;
            break;
        }
        i++;
    }

    if (flag == 0)
        printf("Strings are equal");
    else
        printf("Strings are not equal");

    return 0;
}

