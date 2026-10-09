#include <stdio.h>
int main() {
    int num;
    scanf("%d", &num);

    if (num % 11 == 0 && num % 32 == 0)
        printf("Divisible by both 11 and 32");
    else
        printf("Not divisible by both 11 and 32");

    return 0;
}
