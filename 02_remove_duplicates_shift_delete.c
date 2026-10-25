#include <stdio.h>

void deleteAt(int a[], int *n, int pos) {
    for (int i = pos; i < *n - 1; i++)
        a[i] = a[i + 1];
    (*n)--;
}

int main(void) {
    int a[7];
    printf("Enter 7 numbers \n");
    for(int i = 0; i < 7; i++){
        scanf("%d",&a[i]);
    }
    int n = 7;

    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; ) {
            if (a[i] == a[j]){
                deleteAt(a, &n, j);
            }
            else{
                j++;
            }
        }
    }

    for (int i = 0; i < n; i++){
        printf("%d ", a[i]);
    }
    return 0;
}
