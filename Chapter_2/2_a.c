#include <stdio.h>
int main()
{
    int n, sum=0;
    printf("Enter only a Five digit number: ");
    scanf("%d", &n);
    sum = n/10000 + (n%10000)/1000 + (n%1000)/100 + (n%100)/10 + n%10;
    printf("Sum of its Five digits is %d\n", sum);
    return 0;
}
