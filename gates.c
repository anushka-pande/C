#include <stdio.h>
int AND(int a[], int b[])
{
    int i;
    printf("Truth Table for AND Gate:\n");
    printf("A AND B = Y\n");
    for (i = 0; i < 4; i++)
    {
        int result = a[i] * b[i];
        printf("%d AND %d = %d\n", a[i], b[i], result);
    }
}
int OR(int a[], int b[])
{
    int i;
    printf("Truth Table for OR Gate:\n");
    printf("A OR B = Y\n");
    for (i = 0; i < 4; i++)
    {
        if (a[i] + b[i] > 0)
        {
            printf("%d OR %d = 1\n", a[i], b[i]);
        }
        else
        {
            printf("%d OR %d = 0\n", a[i], b[i]);
        }
    }
}
int XOR(int a[], int b[])
{
    int i;
    printf("Truth Table for XOR Gate:\n");
    printf("A XOR B = Y\n");
    for (i = 0; i < 4; i++)
    {
        if (a[i] == b[i])
        {
            printf("%d XOR %d = 0\n", a[i], b[i]);
        }
        else
        {
            printf("%d XOR %d = 1\n", a[i], b[i]);
        }
    }
}
int XNOR(int a[], int b[])
{
    int i;
    printf("Truth Table for XNOR Gate:\n");
    printf("A XNOR B = Y\n");
    for (i = 0; i < 4; i++)
    {
        if (a[i] == b[i])
        {
            printf("%d XNOR %d = 1\n", a[i], b[i]);
        }
        else
        {
            printf("%d XNOR %d = 0\n", a[i], b[i]);
        }
    }
}
int NAND(int a[], int b[])
{
    int i;
    printf("Truth Table for NAND Gate:\n");
    printf("A NAND B = Y\n");
    for (i = 0; i < 4; i++)
    {
        int result = a[i] * b[i];
        printf("%d NAND %d = %d\n", a[i], b[i], !result);
    }
}
int NOR(int a[], int b[])
{
    int i;
    printf("Truth Table for NOR Gate:\n");
    printf("A NOR B = Y\n");
    for (i = 0; i < 4; i++)
    {
        if (a[i] + b[i] > 0)
        {
            printf("%d NOR %d = 0\n", a[i], b[i]);
        }
        else
        {
            printf("%d NOR %d = 1\n", a[i], b[i]);
        }
    }
}
int NOT()
{
    int i;
    printf("Truth Table for NOT Gate:\n");
    printf("NOT A = Y\n");
    int a1[] = {0, 1};
    for (i = 0; i < 2; i++)
    {
        printf("NOT %d = %d\n", a1[i], !a1[i]);
    }
}
int main()
{
    int choice;
    int a[] = {0, 0, 1, 1};
    int b[] = {0, 1, 0, 1};
    printf("Please enter the following choices to get truth table of desired gate\n");
    printf("Enter 1 for AND Gate\n");
    printf("Enter 2 for OR Gate\n");
    printf("Enter 3 for XOR Gate\n");
    printf("Enter 4 for XNOR Gate\n");
    printf("Enter 5 for NAND Gate\n");
    printf("Enter 6 for NOR Gate\n");
    printf("Enter 7 for NOT Gate\n");
    do
    {
        printf("Enter your choice:\n");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            AND(a, b);
            break;
        case 2:
            OR(a, b);
            break;
        case 3:
            XOR(a, b);
            break;
        case 4:
            XNOR(a, b);
            break;
        case 5:
            NAND(a, b);
            break;
        case 6:
            NOR(a, b);
            break;
        case 7:
            NOT();
            break;
        default:
            printf("Invalid choice!!Please enter valid choice.");
        }
    } while (choice >= 1 && choice <= 7);
    return 0;
}