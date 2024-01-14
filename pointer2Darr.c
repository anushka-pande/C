//To pass a 2D Array to a Function using a Pointer
#include<stdio.h>
void printmatrix(int (*arr)[3][3],int row,int col)
{
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
            printf("%d\t",arr[i][j]);
        }
        printf("\n");
    }
}
int main()
{
    int arr[3][3] = {{1,2,3},{4,5,6},{7,8,9}};
    printmatrix(arr,3,3);
    return 0;
}