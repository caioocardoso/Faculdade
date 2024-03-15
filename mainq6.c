#include <stdio.h>

int main(){
    int num1, num2, quociente, resto;
    printf("Escreva o 1 numero");
    scanf("%i", &num1);
    printf("Escreva o 2 numero");
    scanf("%i", &num2);
    
    quociente = num1/num2;
    resto = num1%num2;
    
    printf ("O quociente é %.0i e o resto é %i", quociente, resto);
    return 0;
}
