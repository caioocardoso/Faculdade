#include <stdio.h>

int main(){
    int lado1, lado2, lado3, perimetro;
    printf("Escreva o lado 1");
    scanf("%i", &lado1);
    printf("Escreva o lado 2");
    scanf("%i", &lado3);
    printf("Escreva o lado 3");
    scanf("%i", &lado2);
    
    perimetro = lado1+lado2+lado3;
    
    printf ("O perimetro é %i", perimetro);
    return 0;
}
