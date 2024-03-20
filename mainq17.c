#include <stdio.h>

int main()
{
    int valor, cem, cinquenta, vinte, dez, cinco, dois, um;
    
    scanf("%d", &valor);
    
    if ((valor/100)>0){
        cem = valor/100;
        printf ("%d notas de 100\n", cem);
    }
    if ((valor%100)>=50){
        cinquenta = (valor%100)/50;
        printf ("%d notas de 50\n", cinquenta);
    }
    if (((valor%100)%50)>=20){
        vinte = ((valor%100)%50)>20;
        printf ("%d notas de 20\n", vinte);
    }
    if ((((valor%100)%50)%20)>=10){
        dez = (((valor%100)%50)%20)/10;
        printf ("%d notas de 10\n", dez);
    }
    if (((((valor%100)%50)%20)%10)>=5){
        cinco = ((((valor%100)%50)%20)%10)/5;
        printf ("%d notas de 5\n", cinco);
    }
    if ((((((valor%100)%50)%20)%10)%5)>=2){
        dois = (((((valor%100)%50)%20)%10)%5)/2;
        printf ("%d notas de 2\n", dois);
    }
    if (((((((valor%100)%50)%20)%10)%5)%2)>=1){
        um = (((((valor%100)%50)%20)%10)%5)%2;
        printf ("%d notas de 1\n", um);
    }
}
