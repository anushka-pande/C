//pointer to pointer
#include <stdio.h>
int main() 
{
    int num=20;
    int *ptr=&num;
    int **ptrptr=&ptr;
    printf("Value of num:%d\n",**ptrptr);

    return 0;
}