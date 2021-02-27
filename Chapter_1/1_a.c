
#include <stdio.h>
int main()
{
    int b_sal;
    float g_sal;
    printf("Enter basic salary of Ramesh ");
    scanf("%d", &b_sal);
    g_sal = b_sal + b_sal*0.4 + b_sal*0.2;
    printf("Gross salary of Ramesh is %f.\n", g_sal);
    return 0;
}