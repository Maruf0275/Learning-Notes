#include<stdio.h>
int main()
{
    int time,avarage;
    double spend,n=12;
    scanf("%d %d",&time,&avarage);
    spend = (time*avarage)/n;
    printf("%.3lf\n",spend);


    return 0;
}