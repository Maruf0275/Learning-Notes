#include <stdio.h>

int main()

{

int a=10;

int *p=&a;

printf("the value of a is %d\n",a);

printf("the address of a is %d\n",&a);

printf("the address of a is %d\n",p);

printf("the data element of a is %d\n",*p);

return 0;

}
