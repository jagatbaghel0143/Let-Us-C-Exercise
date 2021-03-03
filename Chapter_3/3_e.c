#include <stdio.h>
int main()
{
    int n, num = 0;
    printf("Enter only a five digit number: ");
    scanf("%d", &n);
    num = n/10000 + ((n%10000)/1000)*10 + ((n%1000)/100)*100 + ((n%100)/10)*1000 + (n%10)*10000;
    printf("Reverse of given number is %d\n", num);
    if (num==n)
    {
        printf("Entered number is equal to its Reverse number\n");
    }
    else
        printf("Entered number is not equal to its Reverse number\n");
    
    return 0;
}