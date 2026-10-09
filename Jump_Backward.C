#include <stdio.h>
int main()
{
    int i = 1, n = 5;
print:
    printf("%d ", i);
    i++;
    if (i <= n)
        goto print;
    return 0;
}
