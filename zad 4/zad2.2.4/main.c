#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int zad2_2_4();
int main()
{
    int n;
    printf("Podaj liczbe n: ");
    scanf("%d",&n);
    if(n>0)
    {
        printf("Wynik: %d: %d\n",n,zad2_2_4(n));
    }
    else
        printf("Niepoprawne dane");
    return 0;
}
int zad2_2_4(int n)
{
    int suma=0;
    suma=pow(2,n);
    return suma;
}
