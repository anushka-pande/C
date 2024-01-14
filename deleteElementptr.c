//To delete an element from an array using pointers
#include <stdio.h>
void deleteElement(int *arr, int *n, int x) 
{
    int i,j;
    int found=0;
    for(i=0;i<*n;i++) 
    {
        if(arr[i]==x) 
        {
            found=1;
            break;
        }
    }
    if(found) 
    {
        for(j=i;j<(*n-1);j++) 
        {
            arr[j]=arr[j+1];
        }
        (*n)--;
    } else 
    {
        printf("Element not found in the array\n");
    }
}
int main() 
{
    int arr[]={1, 2, 3, 4, 5};
    int n=sizeof(arr)/sizeof(arr[0]);
    int x;
    printf("Enter the element to delete: ");
    scanf("%d", &x);
    deleteElement(arr,&n,x);
    printf("Array after deletion:\n");
    for(int i=0;i<n;i++) 
    {
        printf("%d ",arr[i]);
    }
    return 0;
}
