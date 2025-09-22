#include<stdio.h>
int main()
{
    int arr[50],i,j,n,temp,pos;
    printf("Enter how many elements you want:\n");
    scanf("%d",&n);
    printf("Enter %d the elements:\n",n);
    for(i=0;i<n;i++)
    scanf("%d",&arr[i]);
    for(i=0;i<n-1;i++){
        pos=i;
        for(j=i+1;j<n;j++){
            if(arr[pos]>arr[j])
            pos=j;
        }
        if(pos!=i){
            temp=arr[i];
            arr[i]=arr[pos];
            arr[pos]=temp;
        }
    }
    printf("sorted array is:\n");
    for(i=0;i<n;i++)
    printf("%d\n",arr[i]);
    return 0;

}