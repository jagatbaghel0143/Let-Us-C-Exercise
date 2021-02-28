#include <stdio.h>
int main()
{
    float temp, t;
    printf("Enter temperature of city(in Fahrenheit degrees): ");
    scanf("%f", &t);
    temp = (t - 32)*5.0/9.0;
    printf("Temperature in Centigrade degrees %f", temp);
    return 0;
}