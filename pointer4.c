//To swap two integers using pointers
#include<stdio.h>
void swap(int *a,int *b)
{
    int temp=*a;
    *a=*b;
    *b=temp;
}
int main()
{
    int n1,n2;
    printf("Enter first number:\n");
    scanf("%d",&n1);
    printf("Enter second number:\n");
    scanf("%d",&n2);
    
    printf("Values before swapping: n1=%d n2=%d \n",n1,n2);
    swap(&n1,&n2);
    printf("Values after swapping: n1=%d n2=%d",n1,n2);
    return 0;
}