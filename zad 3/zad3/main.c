#include <stdio.h>
#include <stdlib.h>

int main()
{
//    int a,b, m, suma=0, suma2=0, ilosc=0;
//    printf("Podaj liczbe a: ");
//    scanf("%d", &a);
//    printf("Podaj liczbe b: ");
//    scanf("%d", &b);
//    printf("Podaj ile razy ma byc wykonana wielokrotnosc liczb: ");
//    scanf("%d", &m);
//    do{
//        ilosc++;
//        suma=suma+a;
//        printf("%d", suma);
//        printf("\n");
//        suma2=suma2+b;
//        printf("%d ", suma2);
//    }while(ilosc<m);
// i=i+2
int a, liczba=0;
printf("podaj liczbe calkowita wieksza od 2: ");
scanf("%d", &a);
if(a%2==0)
{
    for(int i=2;i<a;i=i+2)
    {
        liczba=a*i;
    }
printf("%d", liczba);
}
  return 0;
}
