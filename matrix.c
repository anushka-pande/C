#include<stdio.h>

int main()
{
int m1[3][3],m2[3][3],add[3][3],i,j;
printf("Enter first matrix elements\n");
for(i=0;i<3;i++)
{
for(j=0;j<3;j++)
{
scanf("%d",&m1[i][j]);
}
}
printf("Enter second matrix elements\n");
for(i=0;i<3;i++)
{
for(j=0;j<3;j++)
{
scanf("%d",&m2[i][j]);
}
}
printf("Sum of both matrices is:\n");
for(i=0;i<3;i++)
{
for(j=0;j<3;j++)
{
add[i][j]=m1[i][j]+m2[i][j];
printf("%d ",add[i][j]);
}
printf("\n");
}
return 0;
}