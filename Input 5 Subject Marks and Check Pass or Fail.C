#include <stdio.h>
int main()
{
    int s1, s2, s3, s4, s5;
    float total, average;
    printf("Enter marks of 5 subjects:\n");
    printf("Subject 1: ");
    scanf("%d", &s1);
    printf("Subject 2: ");
    scanf("%d", &s2);
    printf("Subject 3: ");
    scanf("%d", &s3);
    printf("Subject 4: ");
    scanf("%d", &s4);
    printf("Subject 5: ");
    scanf("%d", &s5);
    total = s1 + s2 + s3 + s4 + s5;
    average = total / 5;
    printf("\nTotal = %.2f\n", total);
    printf("Average = %.2f\n", average);
    if (average >= 50)
    {
        printf("Result: PASS");
    }
    else
    {
        printf("Result: FAIL");
    }
    return 0;
}
