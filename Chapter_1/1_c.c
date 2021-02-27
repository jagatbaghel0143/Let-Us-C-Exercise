#include <stdio.h>
int main()
{
    int m1, m2, m3, m4, m5, sum=0;
    float perc;
    printf("Enter marks obtained (in 5 subjects) by Student ");
    scanf("%d %d %d %d %d", &m1, &m2, &m3, &m4, &m5);
    sum = m1+m2+m3+m4+m5;
    perc = (sum*100.0)/500.0;
    printf("Total marks of Student is %d\n", sum);
    printf("Percentage of Student is %f\n", perc);
    return 0;
}