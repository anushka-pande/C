#include <stdio.h>
#include <math.h>
float add(float a, float b)
{
    printf("Enter first number:\n");
    scanf("%f", &a);
    printf("Enter second number:\n");
    scanf("%f", &b);
    float result = a + b;
    printf("Addition of two numbers:%f\n", result);
}
float sub(float a, float b)
{
    printf("Enter first number:\n");
    scanf("%f", &a);
    printf("Enter second number:\n");
    scanf("%f", &b);
    float result = a - b;
    printf("Subtraction of two numbers:%f\n", result);
}
float mul(float a, float b)
{
    printf("Enter first number:\n");
    scanf("%f", &a);
    printf("Enter second number:\n");
    scanf("%f", &b);
    float result = a * b;
    printf("Multiplication of two numbers:%f\n", result);
}
float div(float a, float b)
{
    printf("Enter first number:\n");
    scanf("%f", &a);
    printf("Enter second number:\n");
    scanf("%f", &b);
    if (b == 0)
    {
        printf("Error!!Division by 0 is not possible.\n");
    }
    else
    {
        float result = a / b;
        printf("Division of a by b:%f\n", result);
    }
}
int mod(int a, int b)
{
    printf("Enter first number:\n");
    scanf("%d", &a);
    printf("Enter second number:\n");
    scanf("%d", &b);
    int result = a % b;
    printf("Modular division of two numbers:%d\n", result);
}
int square(int a)
{
    printf("Enter a number:\n");
    scanf("%d", &a);
    int result = a * a;
    printf("Square of a number is:%d\n", result);
}
int squareRoot(int a)
{
    printf("Enter a number:\n");
    scanf("%d", &a);
    int result = sqrt(a);
    printf("Square Root of a number is:%d\n", result);
}
float Log(float a)
{
    printf("Enter a number:\n");
    scanf("%f", &a);
    if(a==0)
    {
        printf("Natural log of 0 is undefined.\n");
    }
    else
    {
    float result = log(a);
    printf("Log of %f is :%f\n", a, result);
    }
}
int cube(int a)
{
    printf("Enter a number:\n");
    scanf("%d", &a);
    int result = a * a * a;
    printf("Cube of a number is:%d\n", result);
}
int cubeRoot(int a)
{
    printf("Enter a number:\n");
    scanf("%d", &a);
    int result = cbrt(a);
    printf("Cube Root of a number is:%d\n", result);
}
int main()
{
    float a, b;
    int choice;
    printf("Enter 1 for addition.\n");
    printf("Enter 2 for subtraction.\n");
    printf("Enter 3 for multiplication.\n");
    printf("Enter 4 for division.\n");
    printf("Enter 5 for modular division.\n");
    printf("Enter 6 to find square.\n");
    printf("Enter 7 to find square root.\n");
    printf("Enter 8 to find log.\n");
    printf("Enter 9 to find cube.\n");
    printf("Enter 10 to find cube root.\n");
    do
    {
        printf("Enter your choice:\n");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            add(a, b);
            break;
        case 2:
            sub(a, b);
            break;
        case 3:
            mul(a, b);
            break;
        case 4:
            div(a, b);
            break;
        case 5:
            mod(a, b);
            break;
        case 6:
            square(a);
            break;
        case 7:
            squareRoot(a);
            break;
        case 8:
            Log(a);
            break;
        case 9:
            cube(a);
            break;
        case 10:
            cubeRoot(a);
            break;
        default:
            printf("Invalid Choice!!Please enter valid choice.");
        }
    } while (choice >= 1 && choice <= 10);
    return 0;
}