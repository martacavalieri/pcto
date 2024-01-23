#include <stdio.h>
int main()
{
    int a;
    int b;
    int c;
    printf("inserisci lato a\n ");
    scanf("%d", &a);
    printf("inserisci lato b\n");
    scanf("%d", &b);
    printf("inserisci lato c\n");
    scanf("%d", &c);
    if(a+b>c && a+c>b && c+b>a)
    {
        printf("è un triangolo");
    }
    else
    {
        printf("non è un triangolo");
    }
    return(0);
}