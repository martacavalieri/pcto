#include <stdio.h>
int main()
{
    char lettera;
    printf("inserisci un carattere\n");
    scanf("%c", &lettera);
    if(lettera == 'a' || lettera == 'e' || lettera == 'i' || lettera == 'o' || lettera == 'u' || lettera == 'A' || lettera == 'E' || lettera == 'I' || lettera == 'O' || lettera == 'U')
    { 
        printf("è una vocale");
    }
    else if(lettera>=33 && lettera<=64 || lettera>=91 && lettera<=96 || lettera>=123 && lettera<=127)
    {
        printf("errore");
    }
    else
    {
        printf("è una consonante");
    }
    return(0);
}