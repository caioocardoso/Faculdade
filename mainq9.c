#include <stdio.h>

void main()
{
    int raio, altura;
    int area, volume;
    scanf ("%d %d", &raio, &altura);
    area = 3.14 * (raio*raio);
    volume = area*altura;
    printf ("%d", volume);
}
