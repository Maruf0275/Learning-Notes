#include<stdio.h>
int main()
{
    char name[30];
    float seller;
    double sell,TOTAL;
    gets(name);
    scanf("%f %lf",&seller,&sell);
    TOTAL = seller + (sell*15)/100;
    printf("TOTAL = R$ %.2lf\n",TOTAL);


    return 0;
}