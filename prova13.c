#include <stdio.h>
int main()
{
    float C;
    float F = (9/5)*C+32;
    float K = C+273.15;
    printf("inserisci temperatura in celsius\n");
    scanf("%f",  &C);
    printf("%f\n", F);
    printf("%f\n", K);
    if(C<-273.15)
    {
        printf("errore");
    }
    else
    {
        printf("no errore");
    }
    return(0);
}