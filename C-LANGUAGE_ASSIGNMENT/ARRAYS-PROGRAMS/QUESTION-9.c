#include <stdio.h>

struct emp {
    int empno, age;
    char name[20], address[30];
};

int main() {
    struct emp e;

    printf("Enter empno, name, address, age:\n");
    scanf("%d %s %s %d",&e.empno,e.name,e.address,&e.age);

    printf("\n%d %s %s %d",e.empno,e.name,e.address,e.age);
    return 0;
}

