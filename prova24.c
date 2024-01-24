#include <stdio.h>
int main()
{
    int latoa;
    int latob;
    int latoc;
    printf("latoa\n");
    scanf("%d", &latoa);
    printf("latob\n");
    scanf("%d", &latob);
    printf("latoc\n");
    scanf("%d",  &latoc);
    while(latoa+latob>latoc && latob+latoc>latoa && latoc+latoa>latob)
    {
        if(latoa!=latob && latob!=latoc && latoa!=latoc)
        {
            printf("scaleno");
        }
        else if(latob==latoa && latoa!=latoc && latoc!=latob || latoa==latoc && latoa!=latob && latob!= latoc || latob==latoc && latob!=latoa && latoa!=latoc)
        {
            printf("isoscele");
        }
        else if(latoa==latob && latob==latoc && latoa==latoc)
        {
            printf("equilatero");
        }
    }
}