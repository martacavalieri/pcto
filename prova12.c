#include <stdio.h>
int main()
{
    int a;
    int b;
    int z;
    printf("inserisci un numero\n");
    scanf("%d", &a);
    printf("inserisci un altro numero\n");
    scanf("%d", &b);
    z = a%b;
    // % = modulo = nella divisione non c'è resto
    if(z == 0)
    {
        printf("è multiplo");
    }
    else
    {
        printf("non è multiplo");
    }
    return(0);
}