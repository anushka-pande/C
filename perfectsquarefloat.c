#include<stdio.h>
#include<math.h>
int main() 
{
    float n;
    printf("Enter a number:");
    scanf("%f",&n);
    if (n < 0) 
    {
        printf("Number is negative\n");
    }
    else 
    {
        float squareRoot=sqrt(n);
        if(squareRoot==sqrt(n)) 
        {
            printf("%f is a perfect square\n",n);
        } 
        else 
        {
            printf("%f is not a perfect square\n",n);
        }
    }
    return 0;
}
