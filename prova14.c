#include <stdio.h>
int main()
{
    int a;
    int b;
    int c;
    printf("inserisci a\n");
    scanf("%d", &a);
    printf("inserisci b\n");
    scanf("%d", &b);
    printf("inserisci c\n");
    scanf("%d", &c);
    if(b-a == c-b)
    {
        printf("è una progressione aritmetica\n");
    }
    else
    {
        printf("non è una progressione aritmetica\n");
    }
    return(0);
}