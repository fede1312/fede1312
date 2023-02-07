#include <stdio.h>
int main()
{
    float a;
    printf("inserisci una temperatura in Celsius");
    scanf("%f", &a);
if (a < -273.15)
{
printf("error");
}
else
{
    printf("%f\n",(9/5)*a + 32);
    printf("%f\n",a + 273.15);
}
}