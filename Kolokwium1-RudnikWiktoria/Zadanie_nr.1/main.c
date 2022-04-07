#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    double m;
    printf("Podaj liczbe naturalna ");
    scanf("%d",&n);
    int i =0;
    int dodatnie =0;
    int ujemne=0;
    int zera=0;
    if(n<=0)
        {
        printf("Liczba nie jest naturalna!!!");
        return 0;
        }
    else
    {
    while(i!=n)
    {

        printf("Podaj liczbe: ");
        scanf("%lf",&m);
        if(m<0)
            ujemne++;
        else if(m>0)
            dodatnie++;
        else
            zera++;
            i++;
    }
    }
    printf("Liczb dodatnich jest: %d \n",dodatnie);
    printf("Liczb ujemnych jest: %d \n",ujemne);
    printf("Liczb zer jest: %d \n",zera);
}
