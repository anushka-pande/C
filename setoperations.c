#include<stdio.h>
int Union(int set1[],int set2[],int m,int n)
{
    int i=0,j=0;
    while(i<m && j<n)
    {
        if(set1[i]<set2[j])
        {
            printf("%d ",set1[i]);
            i++;
        }
        else if(set1[i]>set2[j])
        {
            printf("%d ",set2[j]);
            j++;
        }
        else
        {
            printf("%d ",set1[i]);
            i++;
            j++;
        }
    }
    while(i<m)
    {
        printf("%d ",set1[i]);
        i++;
    }
    while(j<n)
    {
        printf("%d ",set2[j]);
        j++;
    }
    return 0;
}
int intersection(int set1[],int set2[],int m,int n)
{
    int i=0,j=0;
    while(i<m && j<n)
    {
        if(set1[i]<set2[j])
        {
            i++;
        }
        else if(set1[i]>set2[j])
        {
            j++;
        }
        else
        {
            printf("%d ",set1[i]);
            i++;
            j++;
        }
    }
    return 0;
}
int difference(int set1[],int set2[],int m,int n)
{
    int i=0,j=0;
    while(i<m && j<n)
    {
        if(set1[i]<set2[j])
        {
            printf("%d ",set1[i]);
            i++;
        }
        else if(set1[i]>set2[j])
        {
            j++;
        }
        else{
            i++;
            j++;
        }
    }
    while(i<m)
    {
        printf("%d ",set1[i]);
        i++;
    }
}
int main()
{
    int m,n;
    printf("Enter number of elements of set 1:\n");
    scanf("%d",&m);
    int set1[m];
    printf("Enter %d elements:\n",m);
    for(int i=0;i<m;i++)
    {
        scanf("%d",&set1[i]);
    }
    printf("Enter number of elements of set 2:\n");
    scanf("%d",&n);
    int set2[n];
    printf("Enter %d elements:\n",n);
    for(int j=0;j<n;j++)
    {
        scanf("%d",&set2[j]);
    }
    int choice;
    printf("Enter 1 for Union\n");
    printf("Enter 2 for Intersection\n");
    printf("Enter 3 for Difference\n");
    do{
        printf("\nEnter choice:\n");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1:
            Union(set1,set2,m,n);
            break;
            case 2:
            intersection(set1,set2,m,n);
            break;
            case 3:
            difference(set1,set2,m,n);
            break;
            default:
            printf("Invalid choice!!");
        }
    }while(choice>=1 && choice<=3);
    return 0;
}