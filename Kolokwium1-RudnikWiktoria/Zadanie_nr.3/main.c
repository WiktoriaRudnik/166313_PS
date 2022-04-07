#include <stdio.h>
#include <stdlib.h>

 int pierwsza_liczba(int n)
 {
     while(n >= 10)
     {
         n = n / 10;
     }
     return n;
 }

 int main()
 {
     int n;
     printf("Podaj argument n: ");
     scanf("%d", &n);
     printf("%d \n", pierwsza_liczba(n));
 }
