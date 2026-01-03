//7. Copy one string to another

#include <stdio.h>

int main() {
    char s1[50], s2[50];
    int i;

    printf("Enter string: ");
    gets(s1);

    for (i = 0; s1[i] != '\0'; i++)
        s2[i] = s1[i];
    s2[i] = '\0';

    printf("Copied string: %s", s2);
    return 0;
}

