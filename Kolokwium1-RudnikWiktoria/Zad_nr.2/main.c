#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, m, wynik=0;
    printf("Podaj liczbe, oraz do jakiej potegi ma byc podniesiona ta liczba: ");
    scanf("%d%d",&n, &m);
    if (n!=0||m!=0)
    {
        wynik=pow(n,m);
        printf("wynik= %d",wynik);
    }
    else
        printf("Podales 2 razy 0!!");
    return 0;
}
