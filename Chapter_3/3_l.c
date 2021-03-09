#include <stdio.h>
int main()
{
    float x, y;
    printf("Enter a point (x,y): ");
    scanf("%f %f", &x, &y);
    if (x==0 && y!=0)
    {
        printf("Point lies on y-axis.");
    }
    else if (y==0 && x!=0)
    {
        printf("Point lies on x-axis.");
    }
    else
        printf("Point lies on origin");
    return 0;
}