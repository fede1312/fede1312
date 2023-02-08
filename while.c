#include <stdio.h>
int main()
{
    int x = 0;

    while ( x <= 20)
    {
    printf("%d\n", x);
    x = x + 2;
    }
    int y = 20;
while (y <= 20 && y >= 0)
{
    printf("%d\n", y);
    y = y - 2;
}
int n = 0;
int somma;

while (n <= 100)
{
    somma = somma + n;
    n= n + 2;
}
printf("%d\n", somma);
}