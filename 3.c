#include <stdio.h>
int main ()
{
    int x;
    float y = 0;
    int z = 0;
    printf("scrivi un numero\n");
    while(x > 0)
    {
        scanf("%d", &x);
        y = x + y;
        z = z + 1;
        printf("%f\n", y / z);
    }
}