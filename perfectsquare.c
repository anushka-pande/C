#include<stdio.h>
#include<math.h>
int perfectSquare(int n)
{
    int i;
    for(i=1;i*i<=n;i++)
    {
        if(i*i==n)
        {
            return 1;
        }
    }
    return 0;
}
int main()
{
    int n;
    printf("Enter a number:");
    scanf("%d",&n);
    perfectSquare(n);
    if(n==0 || perfectSquare(n))
    {
        printf("%d is a perfect square",n);
    }
    else
    {
        printf("%d is not a perfect square",n);
    }
    return 0;
}