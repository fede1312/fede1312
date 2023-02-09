#include <stdio.h>
int main ()
{
    int x;
    int y;
    int z = 1;
    printf("inserisci 2 numeri\n");
    scanf("%d %d", &x, &y);
    while(y>0)
    {
z = x * z;
y = y - 1;
    }
    printf ("potenza %d\n", z);
}