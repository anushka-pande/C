#include <stdio.h>
#include <math.h>
float triangle(float Area)
{
    float a, b, c, h, s;
    int n;
    printf("Enter 1 foe Equilateral triangle\n");
    printf("Enter 2 for Right Angled triangle\n");
    printf("Enter 3 for Isosceles triangle\n");
    printf("Enter 4 for Scalene triangle\n");
    do
    {
        printf("Enter type of triangle:\n");
        scanf("%d", &n);
        switch (n)
        {
        case 1: // Equilateral triangle
            printf("Enter side of an equilateral:\n");
            scanf("%f", &s);
            Area = (sqrt(3) / 4) * s * s;
            printf("Area of an equilateral triangle= %f\n", Area);
            break;
        case 2: // Right Angled triangle
            printf("Enter base of triangle:\n");
            scanf("%f", &b);
            printf("Enter height of triangle:\n");
            scanf("%f", &h);
            Area = (0.5) * b * h;
            printf("Area of Right angled triangle= %f\n", Area);
            break;
        case 3: // Isosceles triangle
            printf("Enter the length of two equal sides:\n");
            scanf("%f %f", &a, &b);
            printf("Enter the length of the base:\n");
            scanf("%f", &c);
            s = (a + b + c) / 2;
            Area = sqrt(s * (s - a) * (s - b) * (s - c));
            printf("Area of Isosceles triangle= %f\n", Area);
            break;
        case 4: // Scalene triangle
            printf("Enter the length of three sides:\n");
            scanf("%f %f %f", &a, &b, &c);
            s = (a + b + c) / 2;
            Area = sqrt(s * (s - a) * (s - b) * (s - c));
            printf("Area of Scalene triangle= %f\n", Area);
            break;
        default:
            printf("Invalid triangle type.\n");
        }
    } while (n >= 1 && n <= 4);
}
float Quadrilateral(float Area)
{
    float a, b, h;
    int num;
    printf("Enter 1 for Square\n");
    printf("Enter 2 for Rhombus\n");
    printf("Enter 3 for Rectangle\n");
    printf("Enter 4 for Paralleogram\n");
    printf("Enter 5 for Trapazium\n");
    do
    {
        printf("Enter type of a Quadrilateral:\n");
        scanf("%d", &num);
        switch (num)
        {
        case 1: // Square
            printf("Enter side of a square:\n");
            scanf("%f", &a);
            Area = a * a;
            printf("Area of a Square= %f\n", Area);
            break;
        case 2: // Rhombus
            printf("Enter length of diagonals of rhombus:\n");
            scanf("%f %f", &a, &b);
            Area = (a * b) / 2;
            printf("Area of Rhombus= %f\n", Area);
            break;
        case 3: // Rectangle
            printf("Enter length and breadth of rectangle:\n");
            scanf("%f %f", &a, &b);
            Area = a * b;
            printf("Area of Rectangle= %f\n", Area);
            break;
        case 4: // Parallelogram
            printf("Enter base and height of Parallelogran:\n");
            scanf("%f %f", &a, &h);
            Area = a * h;
            printf("Area of parallelogram= %f\n", Area);
            break;
        case 5: // Trapazium
            printf("Enter the length of two parallel sides:\n");
            scanf("%f %f", &a, &b);
            printf("Enter the hright of trapazium:\n");
            scanf("%f", &h);
            Area = (a + b) * h / 2;
            printf("Area of trapazium= %f\n", Area);
            break;
        default:
            printf("Inavlid quadrilateral type.\n");
        }
    } while (num >= 1 && num <= 5);
}
float pentagon(float Area, float s) // Pentagon
{
    printf("Enter side of pentagon:\n");
    scanf("%f", &s);
    Area = (1.25) * s * s * (1.376382);
    printf("Area of pentagon= %f\n", Area);
}
float hexagon(float Area, float s) // Hexagon
{
    printf("Enter the side of hexagon:\n");
    scanf("%f", &s);
    Area = sqrt(3) * (3 / 2) * s * s;
    printf("Area of hexagon= %f\n", Area);
}
float heptagon(float Area, float s) // Heptagon
{
    printf("Enter the side of heptagon:\n");
    scanf("%f", &s);
    Area = (1.75) * s * s * (2.076522);
    printf("Area of heptagon= %f\n", Area);
}
float octagon(float Area, float s) // Octagon
{
    printf("Enter the side of octagon:\n");
    scanf("%f", &s);
    Area = 2 * s * s * (2.414214);
    printf("Area of octagon= %f\n", Area);
}
float circle(float Area, float r) // Circle
{
    int k;
    printf("Enter 1 for circle\n");
    printf("Enter 2 for semi-circle\n");
    do
    {
        printf("Enter your choice:\n");
        scanf("%d", &k);
        switch (k)
        {
        case 1:
            printf("Enter radius of circle:\n");
            scanf("%f", &r);
            Area = (3.14) * r * r;
            printf("Area of a circle= %f\n", Area);
            break;
        case 2:
            printf("Enter the radius of semi-circle:\n");
            scanf("%f", &r);
            Area = (1.78) * r * r;
            printf("Area of semi-circle= %f\n", Area);
            break;
        default:
            printf("Invalid circle type.\n");
        }
    } while (k >= 1 && k <= 2);
}
int main()
{
    float Area, a, b, s, h, r;
    int choice;
    printf("Enter 1 for triangle\n");
    printf("Enter 2 for quadrilateral\n");
    printf("ENter 3 for pentagon\n");
    printf("Enter 4 for hexagon\n");
    printf("Enter 5 fot heptagon\n");
    printf("Enter 6 for octagon\n");
    printf("Enter 7 for circle\n");
    do
    {
        printf("Enter your chocie:\n");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            triangle(Area);
            break;
        case 2:
            Quadrilateral(Area);
            break;
        case 3:
            pentagon(Area, s);
            break;
        case 4:
            hexagon(Area, s);
            break;
        case 5:
            heptagon(Area, s);
            break;
        case 6:
            octagon(Area, s);
            break;
        case 7:
            circle(Area, r);
            break;
        default:
            printf("Invalid choice!!Please enter valid choice.");
        }
    } while (choice >= 1 && choice <= 7);
    return 0;
}