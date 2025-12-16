#include <stdio.h>

int main()
{

    float s1, s2, s3, s4, s5, average;

    printf("first subject :");
    scanf("%f", &s1);

    printf("second subject :");
    scanf("%f", &s2);

    printf("third subject :");
    scanf("%f", &s3);

    printf("forth subject :");
    scanf("%f", &s4);

    printf("fifth subject :");
    scanf("%f", &s5);

    average = (s1 + s2 + s3 + s4 + s5) / 5;

    if (average >= 90)
    {
        printf("your grade is A\n");
    }
    else if (average >= 75)
    {
        printf("your grade is B\n");
    }
    else if (average >= 50)
    {
        printf("your grade is C\n");
    }
    else if (average >= 30)
    {
        printf("your grade is D\n");
    }
    else 
    {
        printf("you are failed in this exam \n");
    }

    printf("average =%0.2f", average);


    return 0;
}