#include <stdio.h>
int main()
{
    int m;
    int r;
    int g;
    int e;
    int o;
    printf("inserisci l'età di marta\n");
    scanf("%d", &m);
    printf("inserisci l'età di rebecca\n");
    scanf("%d", &r);
    printf("inserisci l'età di giulia\n");
    scanf("%d", &g);
    printf("inserisci l'età di eleonora\n");
    scanf("%d", &e);
    printf("inserisci l'età di giorgia\n");
    scanf("%d", &o);
    int A = m+r+g+e+o;
    printf("la somma dell'età è");
    printf("%d", A);
    printf("età di marta è: %d\n" , m);
    printf("eta di rebecca è: %d\n", r);
    printf("età di giulia è: %d\n", g);
    printf("età di eleonora è: %d\n", e);
    printf("eta di giorgia è: %d\n", o);
    }