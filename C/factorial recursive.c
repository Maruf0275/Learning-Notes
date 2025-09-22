#include<stdio.h>
int fact(int n);

int main()
{
    int num,result;
    printf("Enter any number :");
    scanf("%d",&num);
    result =fact(num);
    printf("the factorial of %d is %d ",num,result);

    return 0;
}
    int fact(int n)
    {
        if(n==0||n==1)
            return 1;
        else
            return n*fact(n-1);
    }
