#include <stdio.h>
int main()
{
    int a, b, c, sum=0;
    printf("Enter all Three angles of triangle: ");
    scanf("%d %d %d", &a, &b, &c);
    sum = (a + b + c);
    if (sum == 180)
        printf("Given triangle is valid");
    else
        printf("Given triangle is not valid");
    return 0;
}