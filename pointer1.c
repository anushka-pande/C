//To declare and initialize an array through a pointer
#include<stdio.h>
int main()
{
    int arr[]={0,1,2,3,4,5,6,7,8,9};
    int *ptr=arr;
    for(int i=0;i<10;i++)
    {
        printf("%d\t",*(ptr+i));
    }
    return 0;
}