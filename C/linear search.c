#include<stdio.h>
int main()
{
    int array[100],num,value,i,pos=-1;
    printf("Enter how many number you want\n");
    scanf("%d",&num);
    printf("Enter the elements\n");
    for(i=0;i<num;i++)
    scanf("%d",&array[i]);
    printf("Enter value you want to search\n");
    scanf("%d",&value);
    for(i=0;i<num;i++){
        if(value==array[i])
        {
            pos=i+1;
            break;
        }
    }
    if(pos==-1)
    printf("Element not found\n");
    else
    printf("The value is found at position %d\n",pos);
    return 0;
}
