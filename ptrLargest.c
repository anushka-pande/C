//To find largest number in an array using pointer
#include<stdio.h>
int main()
{
    int n;
    printf("Enter number of elements of array:\n");
    scanf("%d",&n);
    int arr[n];
    printf("Enter %d elements for array",n);
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    int *ptr=arr;
    int largest=*ptr;
    for(int i=0;i<n;i++)
    {
        if(*ptr>largest)
        {
            largest=*ptr;
        }
        ptr++;
    }
    printf("Largest number in an array is:%d\n",largest);
    return 0;
}