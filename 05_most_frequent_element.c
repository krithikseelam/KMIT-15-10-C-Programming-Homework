#include <stdio.h>

int main(void) {
    int a[] = {2, 1, 2, 3, 1, 2, 1};
    int n = 7, best = a[0], max = 0;

    for (int i = 0; i < n; i++) {
        int count = 0;

        for (int j = 0; j < n; j++) {
            if (a[i] == a[j])
                count++;
        }

        if (count > max) {
            max = count;
            best = a[i];
        }
    }

    printf("Most frequent element: %d\nCount: %d", best, max);
    return 0;
}
