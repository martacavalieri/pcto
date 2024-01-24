#include <stdio.h>
int main()
{
    int n;
    int x;
    printf("inserisci numero\n");
    scanf("%d", &n);
    x=2;
    while (x<n)
    {
        if(n%x==0)
        {
            printf("non è un numero primo");
            break ;
        }
        else
        {
            x=x+1;
        }
    }
    if(n==x)
        {
            printf("primo");
        }

}