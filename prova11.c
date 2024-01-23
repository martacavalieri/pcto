#include <stdio.h>
int main()
{
    int ep;
    int m;
    printf("inserisci età per prendere la patente in Italia\n");
    scanf("%d", &ep);
    printf("inserisci età marta\n");
    scanf("%d", &m);
    if(m >= ep)
    {
        printf("può prendere la patente");
    }
    else
    {
        printf("non può prendere la patente");
    }
    return(0);
}