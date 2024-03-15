#include <stdio.h>

int main(){
    int lado, area, perimetro;
    printf("Escreva abaixo o valor do lado do quadrado");
    scanf("%i", &lado);
    
    area = lado*lado;
    perimetro = 4*lado;
    
    printf ("O valor da área é %i e o perimetro é %i", area, perimetro);
    return 0;
}
