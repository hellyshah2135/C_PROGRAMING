//3. Print individual characters in reverse order

#include <stdio.h>

int main() {
    char str[100];
    int i, len = 0;

    printf("Enter string: ");
    gets(str);

    while (str[len] != '\0')
        len++;

    for (i = len - 1; i >= 0; i--)
        printf("%c\n", str[i]);

    return 0;
}

