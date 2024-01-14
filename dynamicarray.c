//Dynamic Memory Allocation for an Integer Array
#include <stdio.h>
#include <stdlib.h>
int main() 
{
    int n=5;
    int *arr=(int*)malloc(n*sizeof(int));
    for (int i=0;i<n;i++) 
    {
        arr[i]=i+1;
        printf("%d ",arr[i]);
    }
    free(arr);
    return 0;
}