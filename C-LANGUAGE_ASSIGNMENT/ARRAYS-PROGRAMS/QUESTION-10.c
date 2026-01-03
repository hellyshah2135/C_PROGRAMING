#include <stdio.h>

struct emp {
    int empno, age;
    char name[20], address[30];
};

int main() {
    struct emp e[5];
    int i;

    for(i=0;i<5;i++) {
        printf("Enter empno, name, address, age:\n");
        scanf("%d %s %s %d",&e[i].empno,e[i].name,e[i].address,&e[i].age);
    }

    for(i=0;i<5;i++)
        printf("\n%d %s %s %d",e[i].empno,e[i].name,e[i].address,e[i].age);

    return 0;
}

