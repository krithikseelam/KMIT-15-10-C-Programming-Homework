#include <stdio.h>

int main()
{
    int arr[7], i, j, k, found;

    printf("Enter 7 elements: ");
    for (i = 0; i < 7; i++)
        scanf("%d", &arr[i]);

    printf("Duplicate elements: ");

    for (i = 0; i < 7; i++)
    {
        found = 0;

        for (k = 0; k < i; k++)
        {
            if (arr[i] == arr[k])
            {
                found = 1;
                break;
            }
        }

        if (found == 0)
        {
            for (j = i + 1; j < 7; j++)
            {
                if (arr[i] == arr[j])
                {
                    printf("%d ", arr[i]);
                    break;
                }
            }
        }
    }

    printf("\n");
    return 0;
}

