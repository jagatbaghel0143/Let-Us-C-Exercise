#include <stdio.h>
#include <math.h>
int main()
{
    float   s1, s2, s3, s, temp, ar_tri;
    printf("Enter sides of a triangle: ");
    scanf("%f %f %f", &s1, &s2, &s3);
    s = (s1+s2+s3)/2.0; // This is semi perimeter of triangle.
    temp = s*(s-s1)*(s-s2)*(s-s3);
    ar_tri = pow(temp,0.5);
    printf("Area of triangle is %f", ar_tri);
    return 0;
}