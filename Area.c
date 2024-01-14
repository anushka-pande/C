#include <stdio.h>
#include <math.h>
float equitriangle(float Area, float s)
{
    printf("Enter side of an equilateral:\n");
    scanf("%f", &s);
    Area = (sqrt(3) / 4) * s * s;
    printf("Area of an equilateral triangle= %f\n", Area);
}
float rightangledtri(float Area, float b, float h)
{
    printf("Enter base of triangle:\n");
    scanf("%f", &b);
    printf("Enter height of triangle:\n");
    scanf("%f", &h);
    Area = (0.5) * b * h;
    printf("Area of Right angled triangle= %f\n", Area);
}
float square(float Area, float s)
{
    printf("Enter side of a square:\n");
    scanf("%f", &s);
    Area = s * s;
    printf("Area of a square= %f\n", Area);
}
float rectangle(float Area, float l, float b)
{
    printf("Enter length of rectangle:\n");
    scanf("%f", &l);
    printf("Enter the breadth of rectangle:\n");
    scanf("%f", &b);
    Area = l * b;
    printf("Area of rectangle= %f\n", Area);
}
float pentagon(float Area, float s)
{
    printf("Enter side of pentagon:\n");
    scanf("%f", &s);
    Area = (1.25) * s * s * (1.376382);
    printf("Area of pentagon= %f\n", Area);
}
float hexagon(float Area, float s)
{
    printf("Enter the side of hexagon:\n");
    scanf("%f", &s);
    Area = sqrt(3) * (3 / 2) * s * s;
    printf("Area of hexagon= %f\n", Area);
}
float heptagon(float Area, float s)
{
    printf("Enter the side of heptagon:\n");
    scanf("%f", &s);
    Area = (1.75) * s * s * (2.076522);
    printf("Area of heptagon= %f\n", Area);
}
float octagon(float Area, float s)
{
    printf("Enter the side of octagon:\n");
    scanf("%f", &s);
    Area = 2 * s * s * (2.414214);
    printf("Area of octagon= %f\n", Area);
}
float circle(float Area, float r)
{
    printf("Enter radius of circle:\n");
    scanf("%f", &r);
    Area = (3.14) * r * r;
    printf("Area of a circle= %f\n", Area);
}
int main()
{
    float Area, s, b, h, r, l;
    int choice, n;
    printf("Enter 1 for equilateral triangle\n");
    printf("Enter 2 for right angled triangle\n");
    printf("Enter 3 for square\n");
    printf("Enter 4 for rectangle\n");
    printf("ENter 5 for pentagon\n");
    printf("Enter 6 for hexagon\n");
    printf("Enter 7 fot heptagon\n");
    printf("Enter 8 for octagon\n");
    printf("Enter 9 for circle\n");
    do
    {
        printf("Enter your choice:\n");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            equitriangle(Area, s);
            break;
        case 2:
            rightangledtri(Area, b, h);
            break;
        case 3:
            square(Area, s);
            break;
        case 4:
            rectangle(Area, l, b);
            break;
        case 5:
            pentagon(Area, s);
            break;
        case 6:
            hexagon(Area, s);
            break;
        case 7:
            heptagon(Area, s);
            break;
        case 8:
            octagon(Area, s);
            break;
        case 9:
            circle(Area, r);
            break;
        default:
            printf("Invalid choice!!Please enter valid choice.");
        }
    } while (choice >= 1 && choice <= 9);
    return 0;
}