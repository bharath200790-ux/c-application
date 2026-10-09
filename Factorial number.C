#include <stdio.h>
int main()
{
    int i=1, n= 5, fact= 1;
print:
    fact = fact * i;
    i++;
    if (i <= n)
        goto print;
        printf("fact = %d", fact);
    return 0;
}
