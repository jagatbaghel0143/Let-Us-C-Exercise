#include <stdio.h>
int main()
{
    int temp, C, D;
    printf("Enter two Numbers to swap: ");
    scanf("%d %d", &C, &D);
    temp = C;
    C = D;
    D = temp;
    printf("After swapping numbers are %d and %d", C, D);
    return 0;
}