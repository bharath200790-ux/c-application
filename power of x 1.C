#include <stdio.h>
#include <math.h>
int main()
{
    int n, i = 1;
    printf("Enter the number: ");
    scanf("%d", &n);
print:
    printf("1/%.f\t", pow(n, i));
    i++;
    if (i <= n)
        goto print;
    return 0;
}
