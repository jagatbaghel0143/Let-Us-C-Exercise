#include <stdio.h>
#include <math.h>
int main()
{
    float t, v, wcf;
    printf("Enter temperature(in Fahrenheit degree) and wind velocity(in mph) respectively: ");
    scanf("%f %f", &t, &v);
    wcf = (35.74 + (0.6215)*t + ((0.4275)*t - (35.75))*pow(v,0.16)); //wcf is wind chill factor
    printf("Wind Chill Factor(wcf) is %f", wcf);
    return 0;
}