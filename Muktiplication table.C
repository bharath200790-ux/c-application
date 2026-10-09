#include <stdio.h>
int main()
{
    int n, i = 1;

    printf("Enter number: ");
    scanf("%d", &n);
table:
    if(i <= 10)
    {
        printf("%d x %d = %d\n", i, n, n * i);
        i++;
        goto table;
    }
    return 0;
}
