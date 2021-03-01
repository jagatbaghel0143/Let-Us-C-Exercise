#include <stdio.h>
int main()
{
    float cp, sp, profit, loss;
    printf("Enter cost price and selling price respectively: ");
    scanf("%f %f", &cp, &sp);
    if(cp<=sp)
    {
        profit = sp - cp;
        printf("Profit is %f\n", profit);
    }
    else
    {
        loss = cp - sp;
        printf("Loss is %f\n", loss);
    }
    return 0;
}