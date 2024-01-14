//Basic program for pointers in C language
#include<stdio.h>
int main()
{
    int var=42;                 //To assign the value to a variable

    //& --->  (Address of) operator
    //* --->  (value at) Dereference operator

    int* ptr=&var;              //To address the var using ptr 

    //To print address of var
    printf("Address of var:%p\n",ptr);
    printf("Address of var:%p\n",(&var));

    //To print value of var
    printf("Value at ptr:%d\n",var);
    printf("Value at ptr:%d\n",*ptr);

    return 0;
}