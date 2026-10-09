#include <stdio.h>
#include <math.h>
int main()
{
    int n, i=1, result=1;
    printf("Enter the number: ");
    scanf("%d", &n);
print:
    result = pow(n,i);
    printf("%d\t", result);
    i= i+1;
    if (i <= n)
        goto print;
    return 0;
}
