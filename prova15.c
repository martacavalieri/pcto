#include <stdio.h>
int main()
{
    int a;
    printf("inserisci l'anno\n");
    scanf("%d", &a);
     if(a%100!=0 && a%4==0)
    {
        printf("è bisestile");
    }
     else if (a%400==0)
    {
        printf("è bisestile");
    }
    else
    {
        printf("non è bisestile");
    }
    return(0);
}