#include <stdio.h>
#include <math.h>
int main()
{
    double x,a,G,F,Y;
    printf("Введите x:");
    scanf("%lf", &x);
    printf("Введите a:");
    scanf("%lf", &a);
    G=(3*(3*pow(a,2)-13*a*x+4*pow(x,2)))/(54*pow(a,2)+87*a*x+35*pow(x,2));
    printf("G=%f\n\n",G);

    printf("Введите x:");
    scanf("%lf", &x);
    printf("Введите a:");
    scanf("%lf", &a);
    F=-tanh(63*pow(a,2)-5*a*x-2*pow(x, 2));
    printf("F=%f\n\n",F);


    printf("Введите x:");
    scanf("%lf", &x);
    printf("Введите a:");
    scanf("%lf", &a);
    Y=-asin(8*pow(a,2)-15*a*x-27*pow(x,2));
    printf("Y=%f\n\n",Y);

    return 0;
}