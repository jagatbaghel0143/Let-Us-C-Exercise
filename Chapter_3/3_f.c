#include <stdio.h>
int main()
{
    int a, b, c;
    printf("Enter ages of Ram, Shyam and Ajay: ");
    scanf("%d %d %d", &a, &b, &c);
    if (a<b && a<c)
    {
       printf("Ram is youngest."); 
    }
    else if (b<a && b<c)
    {
        printf("Shyam is youngest."); 
    }
    else
        printf("Ajay is youngest."); 
    return 0;
}