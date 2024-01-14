#include<stdio.h>
#include<string.h>

int main()
{
    char strArray[4]={'s','g','g','s'};
    int location;
    printf("Enter location:\n");
    scanf("%d",&location);
        if(location<0 || location>=4)
        {
            printf("Invalid location!");
        }
        else
        {
            printf("Element at location %d is %c",location,strArray[location]);
        }
    return 0;
}