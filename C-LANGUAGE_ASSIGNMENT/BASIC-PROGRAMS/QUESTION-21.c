// 21. Swap Two Numbers


//a) Using 3rd variable
#include <stdio.h>

int main() {
    int a, b, temp;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    temp = a;
    a = b;
    b = temp;

    printf("After Swap: %d %d\n", a, b);
    return 0;
}


//b) Without using 3rd variable
#include <stdio.h>

int main() {
    int a, b;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    a = a + b;
    b = a - b;
    a = a - b;

    printf("After Swap: %d %d\n", a, b);
    return 0;
}

