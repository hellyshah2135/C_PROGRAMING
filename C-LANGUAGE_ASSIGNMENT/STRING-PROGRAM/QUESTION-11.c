//11. Convert lowercase to uppercase & vice versa
#include <stdio.h>

int main() {
    char str[100];
    int i;

    printf("Enter sentence: ");
    gets(str);

    for (i=0; str[i]!='\0'; i++) {
        if (str[i]>='a' && str[i]<='z')
            str[i] -= 32;
        else if (str[i]>='A' && str[i]<='Z')
            str[i] += 32;
    }

    printf("Converted: %s", str);
    return 0;
}

