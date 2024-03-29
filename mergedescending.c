#include<stdio.h>
void merge(int a1[],int n,int a2[],int m,int a3[])
{
    int i,j,k;
    i=j=k=0;
    while(i<n && j<m)
    {
        if(a1[i]<a2[j])
        {
            a3[k++]=a1[i++];
        }
        else
        {
            a3[k++]=a2[j++];
        }
    }
    while(i<n)
    {
        a3[k++]=a1[i++]; 
    }
    while(j<m)
    {
        a3[k++]=a2[j++];
    }
}
void bubbleSort(int a3[],int l)
{
    int temp;
    for(int i=0;i<l-1;i++)
    {
        for(int j=0;j<l-i-1;j++)
        {
            if(a3[j]<a3[j+1])
            {
                temp=a3[j];
                a3[j]=a3[j+1];
                a3[j+1]=temp;
            }
        }
    }
}
int main()
{
    int n,m;
    printf("Enter number of elements of array1:\n");
    scanf("%d",&n);
    int a1[n];
    printf("Enter %d elements for array1:\n",n);
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a1[i]);
    }
    printf("Enter number of elements of array2:\n");
    scanf("%d",&m);
    int a2[m];
    printf("Enter %d elements for array1:\n",m);
    for(int i=0;i<m;i++)
    {
        scanf("%d",&a2[i]);
    }
    int l=n+m;
    int a3[l];
    merge(a1,n,a2,m,a3);
    bubbleSort(a3,l);
    printf("Merged and sorted array: ");
    for (int i=0;i<l;i++) 
    {
        printf("%d ",a3[i]);
    }
    return 0;
}