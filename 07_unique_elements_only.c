#include <stdio.h>

int main(void) {
    int a[] = {4, 2, 4, 1, 3, 2, 5};
    int n = 7;

    for (int i = 0; i < n; i++) {
        int count = 0;

        for (int j = 0; j < n; j++) {
            if (a[i] == a[j])
                count++;
        }

        if (count == 1)
            printf("%d ", a[i]);
    }

    return 0;
}
