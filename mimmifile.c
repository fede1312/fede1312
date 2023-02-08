#include <stdio.h>
int main()
{
    int a;
    int b;
    int c;
    printf("inserisci 3 numeri: \n");
    scanf("%d %d %d", &a, &b, &c);
    if (a + b > c && b + c > a && a + c > b)
    {
    printf("i tre numeri possono essere un triangolo\n");
        if( a == b  && b == c)
        {
            printf("triangolo equilatero\n");
        
        }
        else if (a == b || a == c || b == c)
        {
            printf("triangolo isoscele\n");
        }
        else
        {
            printf("triangolo scaleno\n");
        }
    }
    else
    {
    printf("i tre numeri non possono essere un triangolo\n");
    }

}