#include <stdio.h>
int main()
{
    int a;
    int b;
    printf("inserisci un numero\n");
    scanf("%d\n", &a);
    printf("inserisci un numero\n");
    scanf("%d\n", &b);
    printf("A = %d\n, B = %d\n", a,b);
    int c = a+b;
    printf("%d", c);
    printf("Risultato= %d\n", (a+b));

    char h;
    printf("inserisci una lettera");
    scanf(" %c", &h);
    printf("H = %c", h);
}