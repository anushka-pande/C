#include <stdio.h>
int main()
{
    int n, m;
    printf("Enter size of array1:\n");
    scanf("%d", &n);

    int a1[n], sum1 = 0;
    printf("Enter elements of array1:");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a1[i]);
    }
    printf("Enter size of array2:\n");
    scanf("%d", &m);

    int a2[m], sum2 = 0;
    printf("Enter elements of array2:");
    for (int j = 0; j < m; j++)
    {
        scanf("%d", &a2[j]);
    }
    int *ptr1 = a1;
    int *ptr2 = a2;

    for (int i = 0; i < n; i++)
    {
        sum1 += *ptr1;
        ptr1++;
    }
    for (int j = 0; j < m; j++)
    {
        sum2 += *ptr2;
        ptr2++;
    }

    printf("Sum of elements of first array:%d\n", sum1);
    printf("Sum of elements of second array:%d\n", sum2);

    int sum = sum1 + sum2;
    printf("Sum of both the arrays:%d\n", sum);
    
    return 0;
}