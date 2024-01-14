//To print string using pointer
#include<stdio.h>
int main() 
{
    char *arr[]={"Red","Yellow","Blue","White"};
    for (int i=0;i<4;i++) 
    {
        printf("%s\n", arr[i]);
    }
    return 0;
}