// 1. Find Maximum Number from Array using Function

#include <stdio.h>

int findMax(int a[], int n) {
    int i, max = a[0];
    for (i = 1; i < n; i++) {
        if (a[i] > max)
            max = a[i];
    }
    return max;
}

int main() {
    int a[10], i, n;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        printf("Enter element %d: ", i + 1);
        scanf("%d", &a[i]);
    }

    printf("Maximum number = %d", findMax(a, n));
    return 0;
}

