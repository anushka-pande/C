#include<stdio.h>
#include<string.h>
int main()
{
    int i,j;
    char strArray1[4]={'s','g','g','s'};
    char strArray2[7]={'m','e','s','s','a','g','e'};
    printf("Common elements in two strings are:");
    for(i=0;i<4;i++)
    {
        for(j=0;j<7;j++)
        {
            if(strArray1[i]==strArray2[j])
            {
                printf("%c",strArray1[i]);
            }
        }
    }
    return 0;
}