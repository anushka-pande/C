//To copy one array to another using pointers
#include<stdio.h>
void copyArray(int *arr1,int *arr2,int n)
{
    for(int i=0;i<n;i++)
    {
        arr2[i]=arr1[i];
    }
}
int main()
{
    int arr1[]={10,20,30};
    int arr2[5];
    int n=sizeof(arr1)/sizeof(arr1[0]);
    printf("Array1:\n");
    for(int i=0;i<n;i++)
    {
    printf("%d\t",arr1[i]);
    }
    copyArray(arr1,arr2,n);
    printf("\nCopied Array:\n");
    printf("Array2:\n");
    for(int i=0;i<n;i++)
    {
        printf("%d\t",arr2[i]);
    }
    return 0;
}