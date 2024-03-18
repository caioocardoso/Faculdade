#include <stdio.h>

void main()
{
    int num, d1, d2, d3, d4, d5, bin;
    scanf ("%d", &num);
    d5 = num%2;
    d4 = (num/2)%2;
    d3 = ((num/2)/2)%2;
    d2 = (((num/2)/2)/2)%2;
    d1 = ((((num/2)/2)/2)/2)%2;
    
    bin = (d1*10000) + (d2*1000) + (d3*100) + (d4*10) + d5;
    printf ("%05i", bin);
}
