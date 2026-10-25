#include <stdio.h>

int main(void) {
    int a[] = {4, 2, 4, 1, 2, 3, 1};
    int b[7], n = 7, m = 0, found;

    for (int i = 0; i < n; i++) {
        found = 0;

        for (int j = 0; j < m; j++) {
            if (a[i] == b[j])
                found = 1;
        }

        if (found == 0)
            b[m++] = a[i];
    }

    for (int i = 0; i < m; i++)
        printf("%d ", b[i]);

    return 0;
}
