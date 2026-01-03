// 7. Length of String without Using Inbuilt Function

#include <stdio.h>

int main() {
    char str[50];
    int i=0;

    printf("Enter string: ");
    scanf("%s",str);

    while(str[i]!='\0')
        i++;

    printf("Length = %d",i);
    return 0;
}

