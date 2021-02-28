#include <stdio.h>
int main()
{
    float l, b, r, ar_rec, ar_cir, pr_rec, pr_cir;
    printf("Enter length, breadth of rectangle and radius of circle(in cm): ");
    scanf("%f %f %f", &l, &b, &r);
    pr_rec = 2*(l + b);
    pr_cir = 2*(22.0/7.0)*r;
    ar_rec = l*b;
    ar_cir = r*r*(22.0/7.0);
    printf("Area of Rectangle is %f and Perimeter is %f\n", ar_rec, pr_rec);
    printf("Area of Circle is %f and Circumference is %f\n", ar_cir, pr_cir);
    return 0;
}