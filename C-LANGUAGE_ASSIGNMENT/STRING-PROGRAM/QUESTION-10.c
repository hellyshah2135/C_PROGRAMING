//10. Extract substring from a string

#include <stdio.h>

int main() {
    char str[100], sub[50];
    int i, start, len;

    printf("Enter string: ");
    gets(str);
    printf("Enter start index and length: ");
    scanf("%d %d",&start,&len);

    for (i=0;i<len;i++)
        sub[i]=str[start+i];
    sub[i]='\0';

    printf("Substring: %s", sub);
    return 0;
}

