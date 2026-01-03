// 6. Count alphabets, digits & special characters

#include <stdio.h>

int main() {
    char str[100];
    int i, alpha=0, digit=0, special=0;

    printf("Enter string: ");
    gets(str);

    for (i = 0; str[i] != '\0'; i++) {
        if ((str[i]>='A' && str[i]<='Z') || (str[i]>='a' && str[i]<='z'))
            alpha++;
        else if (str[i]>='0' && str[i]<='9')
            digit++;
        else
            special++;
    }

    printf("Alphabets=%d Digits=%d Special=%d",alpha,digit,special);
    return 0;
}

