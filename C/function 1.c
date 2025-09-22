#include<stdio.h>
int funC(int a,int b)
{
    return a+b;
}
float funB(float x)
{
    int m=funC(x*x,x*3);
    return sqrt(m);
}
int funA(a)
{
    int y=funB(a*3);
    return funC(y+1,y*y);
}
int main()
{
    int a,b;
    float x,r;
    printf("Enter the value of a & b:");
    scanf("%d%d",&a,&b);
    printf("\nEnter the value of x:");
    scanf("%f",&x);
    r=funC(a,b)+funB(x)+funA(a);//30+11.40+1022.32=1063.72
   printf("the sum is =%f\n",r);


   return 0;
}
