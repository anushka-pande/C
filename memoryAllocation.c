#include <stdio.h>
#include <stdlib.h>
int main()
{
    int *ptr1, *ptr2;
    int size, i;
    printf("Enter number of elements:\n");
    scanf("%d", &size);

    printf("Enter %d elements for malloc:\n", size);
    ptr1 = (int *)malloc(size * sizeof(int));
    if (ptr1 == NULL)
    {
        printf("Memory not allocated using malloc.\n");
        return 1;
    }
    else
    {
        for (i = 0; i < size; i++)
        {
            scanf("%d", &ptr1[i]);
        }
        printf("Memory allocated successfully using malloc.\n");
    }

    printf("Enter %d elements for calloc:\n", size);
    ptr2 = (int *)calloc(size, sizeof(int));
    if (ptr2 == NULL)
    {
        printf("Memory not allocated using calloc.\n");
        free(ptr1);
        return 1;
    }
    else
    {
         for (i = 0; i < size; i++)
        {
            scanf("%d", &ptr2[i]);
        }
        printf("Memory allocated successfully using calloc.\n");
    }
    free(ptr1);
    free(ptr2);
    printf("Memory freed successfully from malloc and calloc.\n");

    int newsize;
    printf("Enter new size:\n");
    scanf("%d", &newsize);

    ptr1 = (int *)realloc(ptr1, newsize * sizeof(int));
    printf("Memory re-allocated successfully for malloc.\n");
    printf("Enter %d elements for realloc malloc:\n", newsize);
    for (i = 0; i < newsize; i++)
    {
        scanf("%d", &ptr1[i]);
    }

    ptr2 = (int *)realloc(ptr2, newsize * sizeof(int));
    printf("Memory re-allocated successfully for calloc.\n");
    printf("Enter %d elements for realloc calloc:\n", newsize);
    for (i = 0; i < newsize; i++)
    {
        scanf("%d", &ptr2[i]);
    }
    printf("Elements of array 1 using malloc function:\n");
    for (i = 0; i < newsize; i++)
    {
        printf("%d ", ptr1[i]);
    }
    printf("\nElements of array 2 using calloc function:\n");
    for (i = 0; i < newsize; i++)
    {
        printf("%d ", ptr2[i]);
    }

    free(ptr1);
    free(ptr2);

    return 0;
}
