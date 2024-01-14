#include<stdio.h>
#include<string.h>
int main()
{
    int i,j;
    char strArray1[50];
    printf("Enter elements for first string array:\n");
    fgets(strArray1,sizeof(strArray1),stdin);
    char strArray2[50];
    printf("Enter elements for second string array:\n");
    fgets(strArray2,sizeof(strArray2),stdin);
    printf("Common elements in two strings are:");
    for(i=0;i<strlen(strArray1);i++)
    {
        for(j=0;j<strlen(strArray2);j++)
        {
            if(strArray1[i]==strArray2[j])
            {
                printf("%c",strArray1[i]);
            }
        }
    }
    return 0;
}