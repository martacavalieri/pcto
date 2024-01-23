#include <stdio.h>
int main()
{
    int x;
    int y;
    printf("inserisci un numero\n");
    scanf("%d", &x);
    printf("inserisci secondo numero\n");
    scanf("%d", &y);
    if(x > y)
    {
        printf("x è maggiore di y\n");
    }
    else if(x == y)
    {
        printf("x è uguale a y\n");
    }
    else if(x != y)
    {
        printf("x è diverso da y");
    }
    else
    {
        printf("x è minore di y\n");
    }
    return(0);
}