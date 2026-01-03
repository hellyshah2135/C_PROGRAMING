//2. Separate individual characters from a string

#include <stdio.h>

int main() {
    char str[100];
    int i;

    printf("Enter string: ");
    gets(str);

    for (i = 0; str[i] != '\0'; i++)
        printf("%c\n", str[i]);

    return 0;
}

