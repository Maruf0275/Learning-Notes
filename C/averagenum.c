#include<stdio.h>
int main()
{
    float a,b,c,sum,avg;
    printf("enter three number :");
    scanf("%f%f%f",&a,&b,&c);
    sum=a+b+c;
    avg=sum/3;
    printf("sum=%.2f\n",sum);
    printf("average=%.2f",avg);

    return 0;

}
