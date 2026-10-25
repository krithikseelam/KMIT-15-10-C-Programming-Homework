#include <stdio.h>

int main()
{
    int arr[7], i, j, found = 0;

    printf("Enter 7 elements: ");
    for (i = 0; i < 7; i++)
        scanf("%d", &arr[i]);

    for (i = 0; i < 7; i++)
    {
        for (j = i + 1; j < 7; j++)
        {
            if (arr[i] == arr[j])
            {
                printf("First repeating element: %d\n", arr[i]);
                found = 1;
                break;
            }
        }

        if (found == 1)
            break;
    }

    if (found == 0)
        printf("No repeating element\n");

    return 0;
}
