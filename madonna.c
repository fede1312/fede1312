    #include <stdio.h>
int main()
{
    int anno;
    printf("ínserisci un anno\n");
    scanf("%d", &anno);
    if (anno % 4 == 0 && anno % 100 !=0 && anno % 400 ==0)
    {
      printf("'bisestile\n");
    }
    else
    {
    printf("non bisestile\n");

}
}