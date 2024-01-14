#include<stdio.h>
int main()
{
    int a1[]={10,20,30};
    int a2[]={5,15,25};
    
    int *ptr1=&a1[0];
    int *ptr2=&a2[0];
    
    int c=*(ptr1)+*(++ptr1)+*(++ptr1);
    int d=*(ptr2)+*(++ptr2)+*(++ptr2);

    printf("Sum of elements of array 1:%d\n",c);
    printf("Sum of elements of array 2:%d\n",d);

    return 0;
}