#include <stdio.h>

int main ()
{
    int a;
    int b;
    scanf("%d %d", &a, &b);
if (a > b)
{ 
    printf("a > b");
}
else if (a < b)
{ 
    printf("a < b");
}
else
{
    printf("a = b");
}
}