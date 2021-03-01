#include <stdio.h>
#include <math.h>
int main()
{
    float ang, temp, a, b, c, d, e, f;
    printf("Enter angle in degree: ");
    scanf("%f", &ang);
    temp = ang*(22.0/7.0)/180;
    a = sin(temp);
    b = cos(temp);
    c = tan(temp);
    d = (1.0)/a;
    e = (1.0)/b;
    f = (1.0)/c;
    printf("Value of sin is %f\n", a);
    printf("Value of cos is %f\n", b);
    printf("Value of tan is %f\n", c);
    printf("Value of cosec is %f\n", d);
    printf("Value of sec is %f\n", e);
    printf("Value of cot is %f\n", f);
    return 0;
}