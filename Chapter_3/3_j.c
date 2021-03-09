#include <stdio.h>
int main()
{  
    int x1, x2, x3, y1, y2, y3, xm, ym;
    printf("Enter three points in (x,y) form: ");
    scanf("%d %d %d %d %d %d", &x1, &y1, &x2, &y2, &x3, &y3);
    ym = (y2-y1)/(x2-x1);
    xm = (y3-y1)/(x3-x1);
    if (ym==xm)
    {
        printf("All three points are on a straight line.");
    }
    else 
        printf("Points are not on a straight line");
    return 0;
}