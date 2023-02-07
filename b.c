#include <stdio.h>

int main()
{
    int a;
    printf("quanti anni hai?");
    scanf("%d", &a);
    if (a >= 18)
    {
        printf("lútente è maggiorenne");
    }
    else
    printf("l utente è minorenne");
}