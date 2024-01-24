#include <stdio.h>

void somma(int a, int b, int c)
{
    c = a+b;
    printf("risultato è:%d", c);   
}

void sottrazione(int a, int b, int c)
{
    c = a-b;
    printf("risultato è:%d", c);
}

void moltiplicazione(int a, int b, int c)
{
    c = a*b;
    printf("risultato è:%d", c);
}

void divisione(int a, int b, int c)
{
    c = a/b;
    printf("risultato è:%d", c);
}

int main()
{
    int x;
    int y;
    int r;
    char op;
    printf("inserisci x\n");
    scanf("%d", &x);
    printf("inserisci y\n");
    scanf("%d", &y);
    printf("quale op?\n");
    scanf(" %c", &op);
    if(op=='+')
    {
        somma(x,y,r);
    }
    else if(op=='-')
    {
        sottrazione(x,y,r);
    }
    else if(op=='*')
    {
        moltiplicazione(x,y,r);
    }
    else if(op=='/')
    {
        divisione(x,y,r);
    }
}