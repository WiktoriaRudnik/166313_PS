#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int zad2_2_4();
int main()
{
    int n, m;
    printf("Podaj liczbe n: \n");
    scanf("%d",&n);
    printf("Podaj liczbe m: \n");
    scanf("%d",&m);
    if((n>0)||(m>0))
    {
        printf("Wynik: %d^ %d = %d\n ",n,m,zad2_2_4(n,m));
    }
    else
        printf("Niepoprawne dane");
    return 0;
}
int zad2_2_4(int n, int m)
{
    return pow(n,m);
}
