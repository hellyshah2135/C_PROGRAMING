//10 Palindrome Number using For Loop & Function

#include <stdio.h>

int palindrome(int n) {
    int rev=0,temp=n;
    for(;n!=0;n/=10)
        rev = rev*10 + n%10;
    return rev==temp;
}

int main() {
    int n;
    printf("Enter number: ");
    scanf("%d",&n);

    if(palindrome(n))
        printf("Palindrome");
    else
        printf("Not Palindrome");
    return 0;
}

