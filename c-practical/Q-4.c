#include <stdio.h>

int main()
{
        int arr[100], n;
        int *ptr;

        printf("Enter number :");
        scanf("%d", &n);

        printf("Enter the elements :\n");
        for (int i = 0; i < n; i++)
        {
                scanf("%d", &arr[i]);
        }

        ptr = arr;

        printf("Even element :");
        for (size_t i = 0; i < n; i++)
        {
                if (*(ptr + i) % 2 == 0)
                {
                        printf("%d ", *(ptr + i));
                }
        }

        return 0;
}