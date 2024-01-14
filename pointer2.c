// To demonstrate the declaration and initialization of a pointer variable
#include<stdio.h>
int main()
{
    int n=20;
    int *ptr=&n;
    printf("Value of number pointed by pointer:%d\n",*ptr);
    return 0;
}