#include<stdio.h>
#include<qrencode.h>
#include<SDL2/SDL.h>
#include<SDL2/SDL_image.h>
int main()
{
    int a[10],i,sum=0;
    printf("Enter an elements of an array: ");

    for(i=0;i<10;i++)
    {
        scanf("%d",&a[i]);
    }

    for(i=0;i<10;i++)
    {
        sum=sum+a[i];
    }

    printf("Sum is: %d",sum);

    return 0;
}