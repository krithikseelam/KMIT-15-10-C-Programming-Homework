#include <stdio.h>

int main(void) {
    int a[] = {2, 2, 1, 2, 3, 2, 2};
    int n = 7, candidate = 0, count = 0;

    for (int i = 0; i < n; i++) {
        if (count == 0)
            candidate = a[i];

        if (a[i] == candidate)
            count++;
        else
            count--;
    }

    count = 0;

    for (int i = 0; i < n; i++) {
        if (a[i] == candidate)
            count++;
    }

    if (count > n / 2)
        printf("Majority element: %d", candidate);
    else
        printf("No majority element");

    return 0;
}
