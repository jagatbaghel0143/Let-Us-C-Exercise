#include <stdio.h>
#include<math.h>
int main()
{
    float dis, x, y, r, x1, y1;
    printf("Enter the coordinates of center of a circle: ");
    scanf("%f %f %f", &x, &y, &r);
    printf("Enter the point to check it is outside, inside or on the circle:");
    scanf("%f %f", &x1, &y1);
    dis = pow((x-x1)*(x-x1)+(y-y1)*(y-y1), 0.5);
    if (dis>r)
    {
        printf("Point is outside the given circle.");
    }
    else if (dis<r)
    {
        printf("Point is inside the given circle.");
    }
    else
        printf("Point is on the circle.");
    return 0;
}