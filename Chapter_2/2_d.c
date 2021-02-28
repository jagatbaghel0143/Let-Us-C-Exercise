#include <stdio.h>
#include <math.h>
int main()
{
    float x, y, r, t;
    printf("Enter co-ordinates of a point: ");
    scanf("%f %f", &x, &y);
    r = pow(x*x + y*y, 0.5);
    t = atan(y/x);
    printf("Polar co-ordinates r and s are %f and %f respectively.", r, t);
    return 0;
}