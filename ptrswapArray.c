//To swap two arrays using pointers
#include<stdio.h>
void swapArrays(int *arr1,int *arr2,int n)
{
    int temp;
    for(int i=0;i<n;i++)
    {
        temp=arr1[i];
        arr1[i]=arr2[i];
        arr2[i]=temp;
    }
}
int main()
{
    int arr1[]={1,2,3,4,5};
    int arr2[]={6,7,8,9,10};
    int n= sizeof(arr1)/sizeof(arr1[0]);
    printf("Before swapping:\n");
    printf("Array1:\n");
    for(int i=0;i<n;i++)
    {
        printf("%d\t",arr1[i]);
    }
    printf("\nArray2:\n");
    for(int i=0;i<n;i++)
    {
        printf("%d\t",arr2[i]);
    }
    swapArrays(arr1,arr2,n);
    printf("\nAfter swapping:\n");
    printf("Array1:\n");
    for(int i=0;i<n;i++)
    {
        printf("%d\t",arr1[i]);
    }
    printf("\nArray2:\n");
    for(int i=0;i<n;i++)
    {
        printf("%d\t",arr2[i]);
    }
    return 0;
}