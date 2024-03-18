#include <stdio.h>

void main()
{
    int p1, p2, p3, p4;
    float bi, bi2, sem;
    scanf ("%d %d %d %d", &p1, &p2, &p3, &p4);
    bi = p1+p2;
    bi2 = p3+p4;
    sem = (bi+bi2)/2;
    printf ("%.5f", sem);
}
