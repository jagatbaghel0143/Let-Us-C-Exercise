#include <stdio.h>
#include <math.h>
int main()
{
    float L1, L2, G1, G2, D;
    printf("Enter the values of latitude and longitude(in degrees) respectively: ");
    scanf("%f %f %f %f", &L1, &L2, &G1, &G2);
    L1 = L1*(22.0/7.0)/180.0; // Conversion of degree to radian
    L2 = L2*(22.0/7.0)/180.0; // Conversion of degree to radian
    G1 = G1*(22.0/7.0)/180.0; // Conversion of degree to radian
    G2 = G2*(22.0/7.0)/180.0; // Conversion of degree to radian
    //Formula for Distance
    D = 3963*(acos(sin(L1)*sin(L2) + cos(L1)*cos(L2)*cos(G2-G1))); // D is distance between two places on Earth
    printf("Distance between latitude and longitude(in nautical miles) is %f", D);
    return 0;
}