#include <stdio.h>
#include <stdlib.h>

int zad2_2_3();
int main()
{
    int n;
    printf("podaj liczbe n: ");
    scanf("%d",&n);
    if(n>2){
        printf("Najwiekszy dzielnik to %d: %d\n" ,n,zad2_2_3(n));
    }
    else
        printf("Niepoprawne dane");
    return 0;
}
int zad2_2_3(int n)
{
    int k;
    for(int i=1;i<=(n/2);i++)
    {
        if(n%i==0)
        {
            k=i;
        }
    }
    return k;
}
