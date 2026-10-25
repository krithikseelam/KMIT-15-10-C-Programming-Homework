#include <stdio.h>

int main(void) {
    int a[] = {1, 1, 2, 2, 2, 3, 4, 4};
    int n = 8, j = 0;

    for (int i = 1; i < n; i++) {
        if (a[i] != a[j]) {
            j++;
            a[j] = a[i];
        }
    }

    for (int i = 0; i <= j; i++)
        printf("%d ", a[i]);

    return 0;
}
