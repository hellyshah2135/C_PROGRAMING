// 9 / 17. Difference Between Structure and Union

#include <stdio.h>

struct s1 {
    int a;
    float b;
};

union u1 {
    int a;
    float b;
};

int main() {
    struct s1 s;
    union u1 u;

    printf("Structure size = %lu\n",sizeof(s));
    printf("Union size = %lu",sizeof(u));
    return 0;
}

