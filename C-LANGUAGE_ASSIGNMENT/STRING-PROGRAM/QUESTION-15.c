//15. Find largest and smallest words in a string

#include <stdio.h>
#include <string.h>

int main() {
    char str[200], word[50], small[50], large[50];
    int i=0,j=0,len,min=100,max=0;

    printf("Enter sentence: ");
    gets(str);

    while (1) {
        if (str[i]==' ' || str[i]=='\0') {
            word[j]='\0';
            len=strlen(word);

            if (len<min) { min=len; strcpy(small,word); }
            if (len>max) { max=len; strcpy(large,word); }

            j=0;
            if (str[i]=='\0') break;
        } else {
            word[j++]=str[i];
        }
        i++;
    }

    printf("Smallest word: %s\n",small);
    printf("Largest word: %s",large);
    return 0;
}

