//12. Count word "is" in a string

#include <stdio.h>

int main() {
    char str[200];
    int i, count=0;

    printf("Enter string: ");
    gets(str);

    for (i=0; str[i]!='\0'; i++) {
        if (str[i]=='i' && str[i+1]=='s' &&
           (str[i+2]==' '||str[i+2]=='\0'))
            count++;
    }

    printf("'is' appears %d times", count);
    return 0;
}

