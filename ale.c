#include <stdio.h>
int main()
{
int anno;
int mese;
int giorno;
printf("in che anno, mese e giorno sei nato?\n");
scanf("%d %d %d", &anno, &mese, &giorno);

if (anno > 1969)
{
printf("sei nato %d anni %d mesi %d giorni dopo il primo atterraggio sulla luna\n", anno - 1969, mese - 7, giorno - 21);
}
else if (anno == 1969)
{
printf("sei nato l anno del primo atterraggio sulla luna\n");
}
else 
{
printf("sei nato %d anni %d mesi %d giorni prima del primo atterraggio sulla luna\n", 1969 - anno, mese - 7, giorno - 21);
}
}