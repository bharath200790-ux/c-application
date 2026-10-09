#include <stdio.h>
int main() {
    int a, b, c;
    printf("Enter three numbers: ");
    scanf("%d %d %d", &a, &b, &c);
    switch (a>b && a>c) {
        case 1:
            printf("%d is the greatest number.", a);
            break;
        default:
            printf(b>c?"%d is greater":"%d is greater",b,c);
    }
    return 0;
}
