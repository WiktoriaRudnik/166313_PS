#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    printf("\//, \\, \\, $, &, \%, \", .");
    printf("\n");
    int a=1, b=2, c=3;
    float suma=0;
    suma =(a+b+c)/3;
    printf("%f",suma);
    printf("\n");
    printf("Podaj 3 liczby ");
    float x , y, z;
    float sr;
    scanf("%f", &x);
    scanf("%f", &y);
    scanf("%f", &z);
    sr =(x+y+z)/3;
    printf("%f",sr);
    printf("\n");
    printf("podaj liczbe: ");
    int w;
    scanf("%d", &w);
    if(w<=0)
    {
        printf("%d",-w);
    }
    else
        printf("%d", w);
    printf("\n");
    printf("Podaj 3 liczby calkowite: ");
    int d, e, f, max;
    scanf("%d", &d);
    scanf("%d", &e);
    scanf("%d", &f);
    max=d;
    if(max<b)max=e;
    if(max<c)max=f;
    printf("najwieksza wartosc to: ");
    printf("%d",max);
    printf("Podaj 3 (ABC) liczby: ");
    float A, B, C, delta=0, x1=0, x2=0, x0=0;
    scanf("%f %f %f", &A, &B, &C);
    printf("Delta wynosi: ");
    delta= (B*B)-4*A*C;
    printf("%f",delta);
    printf("\n");
    if(delta>0)
    {
        printf("X1 i X2 wynosza: ");
        x1=(-B-sqrt(delta))/(2*A);
        x2=(-B+sqrt(delta))/(2*A);
        printf("%f %f",x1, x2);

    }
       else if(delta==0)
    {
        printf("X0 wynosi: ");
        x0=-B/(2*A);
        printf("%f",x0);
    }
    else
        printf("Brak pierwiastkow ");
//    printf("Podaj dwie liczby: ");
//    float X, Y;
//    scanf("%f %f", &X, &Y);
//    printf("Podaj dzialanie ktore ma byc wykonane ");
//    int dzialanie=0, wynik=0;
//    scanf("%d",dzialanie)
//    if(dzialanie='+')printf("%d",A)
    return 0;
}
