#include <stdio.h>
void minore(int a, int b)
{
    b=1969-a;
    printf("è più piccolo di:%d", b);
}

void maggiore(int a, int b)
{
    b=a-1969;
    printf("è più grande di:%d", b);
}

int main()
{
    int an;
    int ad;
    printf("inserici anno di nascita\n");
    scanf("%d", &an);
    if(an==1969)
    {
        printf("è nato nello stesso anno");
    }
    else if(an<1969)
    {
        minore(an,ad);
    }
    else if(an>1969)
    {
        maggiore(an,ad);
    }
    return(0);
}