#include<stdio.h>
int main()
{
   int a=0,b=1,c,i,n;
   c=a+b;
   printf("Enter the number of terms: ");
   scanf("%d",&n);
   printf("Fibonacci Series : %d %d \t",a,b);

   for(i=3;i<=n;++i)
   {
    printf("%d\t",c);
    a=b;
    b=c;
    c=a+b;
   }
   return 0;
}