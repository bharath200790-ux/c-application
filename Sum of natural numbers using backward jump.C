#include <stdio.h>
int main()
{
    int i=1, n= 10, sum=0;
print:
    sum = sum+i;
    i++;
    if (i <= n)
        goto print;
        printf("Sum = %d", sum);
    return 0;
}
