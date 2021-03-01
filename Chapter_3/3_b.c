#include <stdio.h>
int main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    if((n%2)==0) // n%2 gives remainder
        printf("%d is even.\n", n);
    else
        printf("%d is odd.\n", n);
    return 0;
}