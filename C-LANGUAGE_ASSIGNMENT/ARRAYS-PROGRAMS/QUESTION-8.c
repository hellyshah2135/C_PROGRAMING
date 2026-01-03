//8. Reverse String & Check Palindrome

#include <stdio.h>
#include <string.h>

int main() {
    char str[50], rev[50];
    int i, j=0, len;

    printf("Enter string: ");
    scanf("%s",str);

    len = strlen(str);
    for(i=len-1;i>=0;i--)
        rev[j++] = str[i];
    rev[j]='\0';

    printf("Reverse = %s\n",rev);

    if(strcmp(str,rev)==0)
        printf("Palindrome");
    else
        printf("Not Palindrome");

    return 0;
}

