#include <stdio.h>

int main(void) {
    int a[] = {1, 2, 2, 3, 3, 3, 4, 4, 5};
    int n = 9, k = 2;

    for (int i = 0; i < n; i++) {
        int count = 0, seen = 0;

        for (int j = 0; j < i; j++) {
            if (a[i] == a[j])
                seen = 1;
        }

        if (seen)
            continue;

        for (int j = 0; j < n; j++) {
            if (a[i] == a[j])
                count++;
        }

        if (count == k)
            printf("%d ", a[i]);
    }

    return 0;
}
