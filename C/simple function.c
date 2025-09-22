#include<stdio.h>
int fact (int a)
{
    if (a==1)
        return 1;
    else
        return a* fact(a-1);
}
int main()

{
    int a,r;
    printf("Enter the value of a:");
    scanf("%d",&a);
    r=fact(a);
    printf("The factorial value of %d is  = %d",a,r);
    return 0;
}
