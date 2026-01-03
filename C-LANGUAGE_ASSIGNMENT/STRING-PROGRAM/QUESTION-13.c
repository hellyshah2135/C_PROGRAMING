//13. Remove characters except alphabets

#include <stdio.h>

int main() {
    char str[100], temp[100];
    int i,j=0;

    printf("Enter string: ");
    gets(str);

    for (i=0; str[i]!='\0'; i++) {
        if ((str[i]>='A'&&str[i]<='Z')||(str[i]>='a'&&str[i]<='z'))
            temp[j++]=str[i];
    }
    temp[j]='\0';

    printf("Result: %s", temp);
    return 0;
}

