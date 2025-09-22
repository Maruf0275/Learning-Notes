#include<stdio.h>
int main()
{
    int array[100],i,num,mid,low,high,value,pos=-1;
    printf("Enter how many numbers you want:\n");
    scanf("%d",&num);
    printf("enter the elements:\n");
    for(i=0;i<num;i++)
    scanf("%d",&array[i]);
    printf("Enter the value you want to search\n");
    scanf("%d",&value);

    low=0;
    high=num-1;
    
    while(low<=high)
    {
      mid=(low+high)/2;
        if(value==array[mid])
        {
            pos=mid+1;
            printf("Element found at position %d\n",pos);
            break;
        }
        else if(value>array[mid])
        low=mid+1;
        else
        high=mid-1;
    }
    if(high<low)
    printf("Element not found\n");
    return 0;
}