//To modify Array Elements using Pointers
#include<stdio.h>
int main() 
{
    int arr[]={1,2,3,4,5};
    int *ptr = arr;
    printf("Original array:");
    for (int i=0;i<5;i++) 
    {
        printf("%d ",arr[i]);
    }
    printf("\nModified array:");
    for (int i=0;i<5;i++) 
    {
        (*ptr)+=1;
        printf("%d ",*ptr);
        ptr++;
    }
    return 0;
}
