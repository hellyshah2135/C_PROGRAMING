//10. Area of Rectangular Prism

#include <stdio.h>

int main() {
    int w, l, h;
    printf("Enter width, length, height: ");
    scanf("%d %d %d", &w, &l, &h);

    printf("Area: %d\n", 2 * (w*l + h*l + h*w));
    return 0;
}

