#include <stdio.h>

int main()
{
    int idade, dias, meses, anos;
    printf("Qual sua idade em dias");
    scanf ("%i", &idade);
    
    anos = idade / 365;
    meses = (idade % 365) / 30;
    dias = ((idade % 365) % 30);
    
    printf ("Sua idade é %i anos %i meses e %i dias", anos, meses, dias);

    return 0;
}
