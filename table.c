#include<stdio.h>
int main()
{
    int n,i;
    printf("Enter a number you want multiplication table of:\n");
    scanf("%d",&n);
    if(n>0)
    {
        for(i=1;i<=10;i++)
        {
            printf("%d * %d = %d \n",n,i,n*i);
        }
    }
    else
    {
        printf("Number is invalid!!");
    }
    return 0;
}