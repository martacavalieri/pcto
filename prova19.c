#include <stdio.h>
int main()
{
    int n;
    int t;
    int s;
    // n= numero prezzi
    // t= totale che pago
    // s= sconto
    printf("numero pezzi\n");
    scanf("%d", &n);
    while(n>0)
    {
        if(n>=30 && n<50)
        {
            s = 5*n/10;
            printf("%d\n", s);
            t = 5*n-s;
            printf("%d\n", t);
        }
        else if(n>=50)
        {
            s = 5*n/100*15;
            printf("%d\n", s);
            t = 5*n-s;
            printf("%d\n", t);
        } 
        else
        {
            t=5*n;
            printf("%d\n", t);
        }
        printf("numero pezzi\n");
        scanf("%d", &n);
        
    }
    return(0);
}