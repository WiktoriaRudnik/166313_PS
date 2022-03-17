#include <iostream>
#include <math.h>


using namespace std;
int fun1(int n,int k);
int fun2(int l1);
int fun3(int l2,int l3);
void zlicz();

int main()
{

    //2.2.3
    /*
    int n,k;
    printf("podaj liczbe nieujemna wiekszo niz 2 ");
    scanf("%d", &n);
    printf("podaj liczbe ");
    scanf("%d", &k);
    if (n<2){
        printf("podana liczba nie jest dodatnia");
        return 0;
    }
printf("%d",fun1(n,k));
*/
//2.2.4
/*
int l1;
    printf("podaj liczbe nieujemna wiekszo niz 2 ");
    scanf("%d", &l1);
    printf("%d",fun2(l1));
    */
    //2.2.7
    /*
    int l2,l3;
    printf("podaj liczbe nieujemna ");
    scanf("%d", &l2);
    printf("podaj liczbe nieujemna ");
    scanf("%d", &l3);
    if (l2==0){
        printf("podaj inna liczbe niz 0");
        return 0;
    }else if(l3==0){
    printf("podaj inna liczbe niz 0");
    }
    printf("%d",fun3(l2,l3));
    */

    //2.2.17
    /*
    int liczba;
    zlicz();
    */

    //2.2.21
    return 0;
}

int fun1(int n,int k){
    int wynik;
    for(int i=1;i<n;i++){
        if(n%i==0&&k%i==0){
            wynik=i;
        }
    }
    return wynik;
}

int fun2(int l1){
    int wynik=1;
    for(int i=1;i<l1;i++){
            wynik=wynik*2;
    }
        return wynik;
}

int fun3(int l2,int l3){
    int wynik=l2;

            wynik=pow(l2,l3);

        return wynik;
}

void zlicz(){

    static unsigned int liczba=0;
    liczba++;
    printf("Funkja zostala wywolana %d razy\n",liczba);
}
