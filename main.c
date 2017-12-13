#include <stdio.h>
#include <math.h>


main(void)
{
    double x, a, d, G, F, Y;
    int n;

    printf("Формула №1 G=(3*(3*pow(a,2)-13*a*x+4*pow(x,2)))/(54*pow(a,2)+87*a*x+35*pow(x,2)\n");
    printf("Формула №2 F=-tanh(63*pow(a,2)-5*a*x-2*pow(x, 2))\n");
    printf("Формула №3 Y=-asin(8*pow(a,2)-15*a*x-27*pow(x,2))\n");
    printf("Выберите формулу для решения:");
    scanf("%d", &n);

    switch (n)
    {
        case 1:
            printf("Enter x:");
            scanf("%lf", &x);
            printf("Enter a:");
            scanf("%lf", &a);
            d = (54*pow(a,2)+87*a*x+35*pow(x,2));
            if (d != 0) {
                G=(3*(3*pow(a,2)-13*a*x+4*pow(x,2)))/(54*pow(a,2)+87*a*x+35*pow(x,2));
                printf("G = %lf\n", G);
            }
            else printf("Выберите другие значения для x и a");

            break;

        case 2:
            printf("Enter x:");
            scanf("%lf", &x);
            printf("Enter a:");
            scanf("%lf", &a);
            F=-tanh(63*pow(a,2)-5*a*x-2*pow(x, 2));
            printf("F = %lf\n", F);
            break;

        case 3:
            printf("Enter x:");
            scanf("%lf", &x);
            printf("Enter a:");
            scanf("%lf", &a);
            Y=-asin(8*pow(a,2)-15*a*x-27*pow(x,2));
            printf("Y = %lf\n", Y);
            break;

        default:
            printf("Вы выбрали не существующий вариант"); //Для ошибочного ввода
    }
    return 0;
}