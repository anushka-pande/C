//Pointer to an Array of Structures:
#include <stdio.h>
struct Point 
{
    int x;
    int y;
};
int main() 
{
    struct Point points[]={{1,2},{3,4},{5,6}};
    struct Point *ptr=points;
    for (int i=0;i<3;i++) 
    {
        printf("(%d, %d)\n", ptr->x, ptr->y);
        ptr++;
    }
    return 0;
}