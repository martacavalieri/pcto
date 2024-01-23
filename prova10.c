#include <stdio.h>
int main()
{
    int e;
    int m = 18;
    printf("inserisci l'età\n");
    scanf("%d", &e);
    if(e >= m)
    {
        printf("è maggiorenne");
    }
    else
    {
        printf("non è maggiorenne");
    }
    return(0);
}