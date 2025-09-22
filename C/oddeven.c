#include<stdio.h>
int main ()
{
    int num;
    printf("enter any number");
    scanf ("%d",&num);
    if (num%2==0){
        printf("this number is even");
    }
    else {
        printf("This number is odd");
    }
    return 0;
}
