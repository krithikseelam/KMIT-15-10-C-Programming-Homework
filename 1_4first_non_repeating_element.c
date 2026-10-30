#include <stdio.h>

int main()
{
    int arr[7], i, j, count, found = 0;

    printf("Enter 7 elements: ");
    for (i = 0; i < 7; i++)
        scanf("%d", &arr[i]);

    for (i = 0; i < 7; i++)
    {
        count = 0;

        for (j = 0; j < 7; j++)
        {
            if (arr[i] == arr[j])
                count++;
        }

        if (count == 1)
        {
            printf("First non-repeating element: %d\n", arr[i]);
            found = 1;
            break;
        }
    }

    if (found == 0)
        printf("No non-repeating element\n");

    return 0;
}
