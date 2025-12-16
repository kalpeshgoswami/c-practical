
#include <stdio.h>

int main()
{

    int num = 10;

    for (int i = 10; i >= 6; i--)
    {

        for (int j = 6; j < i; j++)
        {
            printf(" ");
        }
        for (int k = i; k <= num; k++)
        {
            printf("%d", k);
        }
        printf("\n");
    }

    return 0;
}