#include<stdio.h>
int main()
{
    int i,n,even=0,odd=0;
    printf("Enter number of elements:\n");
    scanf("%d",&n);
    float arr[n];
    printf("Enter %d elements;\n",n);
    for(i=0;i<n;i++)
    {
        scanf("%f",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        if((int)arr[i]%2==0)
        {
            even++;
        }
        else
        {
            odd++;
        }
    }
    printf("Even element:%d\n",even);
    printf("Odd element:%d\n",odd);
    return 0;
}