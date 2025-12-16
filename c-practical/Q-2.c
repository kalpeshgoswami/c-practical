#include <stdio.h>

float findAverage(int arr[5][5], int r, int c)
{
    int i, j;
    int sum = 0;

    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            sum = sum + arr[i][j];
        }
    }

    return (float)sum / (r * c);
}

int main()
{
    int arr[5][5];
    int r, c, i, j;
    float avg;

    printf("Enter number of rows and columns: ");
    scanf("%d %d", &r, &c);

    printf("Enter array elements:\n");
    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }

    avg = findAverage(arr, r, c);

    printf("Average of all elements = %.2f", avg);

    return 0;
}
