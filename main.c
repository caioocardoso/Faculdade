#include <stdio.h>

int main(){
    int base, altura, area, perimetro;
    printf("Escreva abaixo o valor da base do retângulo");
    scanf("%i", &base);
    printf("Escreva abaixo o valor da altura do retângulo");
    scanf("%i", &altura);
    
    area = base * altura;
    perimetro = 2*base + 2*altura;
    
    printf ("O valor da área é %i e o perimetro é %i", area, perimetro);
    return 0;
}
