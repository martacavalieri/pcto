#include <stdio.h>
int main()
{
    int latoa;
    int latob;
    int latoc;
    int perimetro;
    int area;
    int altezza;
    printf("inserisci latoa\n");
    scanf("%d", &latoa);
    printf("inserisci latob\n");
    scanf("%d", &latob);
    printf("inserisci latoc\n");
    scanf("%d", &latoc);
    printf("inserisci altezza\n");
    scanf("%d", &altezza);
    perimetro = latoa+latob+latoc;
    printf("perimetro è:");
    printf("%d\n", perimetro);
    area = latob*altezza/2;
    printf("area è:");
    printf("%d\n", area);
    return(0);
}