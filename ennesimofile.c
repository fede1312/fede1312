#include <stdio.h>
int main ()
{
    int array[5];
    int i = 0;
    
    printf("inserisci un numero\n");
    while(i <= 4)
    {
    scanf("%d", &array[i]);
    i++;
}
i = 0;
while(i <= 4)
{
    printf("%d\n", array[i]);
    i++;
}
i = 0;
int temporanea;
while(i > 0)
{
    temporanea = array[i];
    array[i] = array[4-i];
    array[4-i] = temporanea;
   i++;
}
i = 0;
while(i <= 4)
{
 printf("%d\n", array[i]);
i++;
}
  
}