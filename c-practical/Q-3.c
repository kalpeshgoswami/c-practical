#include <stdio.h>

void OddElements(int arr[], int n)
{
    int i;
    printf("Odd elements : ");
    
    for(i = 0; i < n; i++)
    {
        if(arr[i] % 2 != 0)
        {
            printf("%d ", arr[i]);
        }
    }
    printf("\n");
}

int main()
{
    int arr[50], n, i;

    printf("Enter number : ");
    scanf("%d", &n);

    printf("Enter elements :\n");
    for(i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    OddElements(arr, n);

    return 0;
}
