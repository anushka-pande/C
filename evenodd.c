#include<stdio.h>
int main()
{
    int i,n,even=0,odd=0;
    printf("Enter number of elements:\n");
    scanf("%d",&n);
    int arr[n];
    printf("Enter %d elements:\n",n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        if(arr[i]%2==0)
        {
            even++;
        }
        else
        {
            odd++;
        }
    }
    printf("Even elements:%d\n",even);
    printf("Odd elements:%d\n",odd);
     return 0;
}