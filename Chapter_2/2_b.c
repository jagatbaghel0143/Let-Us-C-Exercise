#include <stdio.h>
int main()
{
    int n, sum = 0;
    printf("Enter only a five digit number: ");
    scanf("%d", &n);
    sum = n/10000 + ((n%10000)/1000)*10 + ((n%1000)/100)*100 + ((n%100)/10)*1000 + (n%10)*10000;
    printf("Reverse of given number is %d", sum);
    return 0;
}