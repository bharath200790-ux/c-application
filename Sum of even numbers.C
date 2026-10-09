#include <stdio.h>
int main()
{
    int i=2, n= 10, sum=0;
print:

    sum = sum+i;
   i= i+2;
    if (i <= n)
        goto print;
        printf("Sum = %d", sum);
    return 0;
}
