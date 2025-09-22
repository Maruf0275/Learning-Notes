#include<stdio.h>
int main()
{

    int a[100], n, i,sum=0;
    printf("Enter the number :");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        sum=sum+ a[i];
    }
    printf("the sum is = %d\n",sum);
    printf("average is=%0.2f",(float)sum/n);

    return 0;
}
