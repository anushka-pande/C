//To pass an Array to a Function using a Pointer
#include<stdio.h>
void printArray(int *arr,int n)
{
    for(int i=0;i<6;i++)
    {
        printf("%d\t",arr[i]);
    }
}
int main()
{
    int arr[]={10,20,30,40,50,60};
    printArray(arr,6);
    return 0;
}