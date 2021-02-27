#include <stdio.h>
int main()
{
    float dis_km, dis_m, dis_f, dis_i, dis_cm;
    printf("Enter the distance between cities(in km.):- ");
    scanf("%f", &dis_km);
    dis_m = dis_km*1000;
    dis_f = dis_km*3280.8399;
    dis_i = dis_km*39370.0787;
    dis_cm = dis_km*100000;
    printf("Distance in meter %f meter.\n", dis_m);
    printf("Distance in feet %f feet.\n", dis_f);
    printf("Distance in inches %f inches.\n", dis_i);
    printf("Distance in centimeters %f centimeter.\n", dis_cm);
    return 0;
}