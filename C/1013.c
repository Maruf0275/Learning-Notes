#include<stdio.h>
int main()
{
    int a,b,s;
    scanf("%d %d %d",&a,&b,&s);
    int greatest = a;
    if (b > greatest) 
    {
        greatest = b;
    }
    if (s > greatest)
    {
        greatest = s;
    }
    printf("%d eh o maior",greatest);

    return 0;
}