#include <stdio.h>
int main()
{
    int units, choice;
    printf("Enter the electricity units: ");
    scanf("%d", &units);
    choice = (units <= 200) ? 1 : (units <= 500) ? 2 : 3;
    switch (choice)
    {
        case 1:
            printf("Rate per unit = 3");
            break;

        case 2:
            printf("Rate per unit = 5");
            break;

        case 3:
            printf("Rate per unit = 8");
            break;

        default:
            printf("Invalid Input");
    }
    return 0;
}
