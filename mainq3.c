#include <stdio.h>

int main(){
    int raio, perimetro, area;
    printf("Escreva");
    scanf("%i", &raio);
    
    area = 3.14*(raio*raio);
    perimetro = 2*3.14*raio;
    
    printf ("O valor da área é %i e o perimetro é %i", area, perimetro);
    return 0;
}
