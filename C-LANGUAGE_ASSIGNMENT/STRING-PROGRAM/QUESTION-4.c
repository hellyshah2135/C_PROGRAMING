// 4. Count total number of words in a string

#include <stdio.h>

int main() {
    char str[200];
    int i, words = 1;

    printf("Enter sentence: ");
    gets(str);

    for (i = 0; str[i] != '\0'; i++) {
        if (str[i] == ' ' && str[i+1] != ' ')
            words++;
    }

    printf("Total words = %d", words);
    return 0;
}

