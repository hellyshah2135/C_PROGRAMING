// 11. Accept 5 Numbers & Display Reverse Order

#include <stdio.h>

int main() {
    int a[5],i;

    for(i=0;i<5;i++)
        scanf("%d",&a[i]);

    for(i=4;i>=0;i--)
        printf("%d ",a[i]);
    return 0;
}

