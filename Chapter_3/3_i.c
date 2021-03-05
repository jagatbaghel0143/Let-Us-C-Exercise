#include <stdio.h>
int main()
{
    int l, b, area, peri;
    printf("Enter length and breadth of a rectangle: ");
    scanf("%d %d", &l, &b);
    area = l*b;
    peri = 2*(l+b);
    if (area >= peri)
    {
        printf("Area of Rectangle %d is greater than its perimeter %d", area, peri);
    }
    else
        printf("Area of Rectangle %d is less than to its perimeter %d", area, peri);
    return 0;
}