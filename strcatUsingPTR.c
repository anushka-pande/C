//C program to concatenate two strings using pointer
#include<stdio.h>
#include<string.h>
void concatenate(char *p,char *q)   //function to concatenate string
{
    while(*p)
    {
        p++;         //to move pointer at the end of first sting 'p'
    }
    while(*q)
    {
        *p=*q;       //To copy characters of the second string 'q' to the end of first string 'p'
        p++;
        q++;
    }
}
int main()
{
    char str1[]="Hello ";      //First string
    char str2[]="there !!";    //Second string

    concatenate(str1,str2);    //Function call to concatenate strings

    printf("Concatenated string is:%s\n",str1);    //To display concatenated strings
    return 0;
}