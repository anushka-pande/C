#include<stdio.h>
#include<string.h>
int main()
{
    char string1[25],string2[25];
    printf("Enter string 1:\n");
    fgets(string1,sizeof(string1),stdin);
    printf("Enter string 1:\n");
    fgets(string2,sizeof(string2),stdin);
    strcat(string1,string2);
    printf("string1=%s string2=%s",string1,string2);
    return 0;
}