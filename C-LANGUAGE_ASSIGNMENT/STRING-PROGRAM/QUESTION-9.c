// 9. Find maximum number of characters in a string

#include <stdio.h>

int main() {
    char str[100];
    int len=0;

    printf("Enter string: ");
    gets(str);

    while (str[len]!='\0')
        len++;

    printf("Maximum characters = %d", len);
    return 0;
}

