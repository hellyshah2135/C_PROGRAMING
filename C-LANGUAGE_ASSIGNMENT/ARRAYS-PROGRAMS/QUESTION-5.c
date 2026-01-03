//5. Sort Two Arrays in Ascending or Descending Order

#include <stdio.h>

void sort(int a[], int n, int choice) {
    int i, j, temp;

    for (i = 0; i < n - 1; i++) {
        for (j = i + 1; j < n; j++) {
            if ((choice == 1 && a[i] > a[j]) ||
                (choice == 2 && a[i] < a[j])) {
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }
}

int main() {
    int a[10], b[10], i, n, choice;

    printf("Enter size of arrays: ");
    scanf("%d", &n);

    printf("Enter elements of first array:\n");
    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);

    printf("Enter elements of second array:\n");
    for (i = 0; i < n; i++)
        scanf("%d", &b[i]);

    printf("1. Ascending\n2. Descending\nEnter choice: ");
    scanf("%d", &choice);

    sort(a, n, choice);
    sort(b, n, choice);

    printf("Sorted first array:\n");
    for (i = 0; i < n; i++)
        printf("%d ", a[i]);

    printf("\nSorted second array:\n");
    for (i = 0; i < n; i++)
        printf("%d ", b[i]);

    return 0;
}

