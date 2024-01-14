#include <stdio.h>
#include <stdbool.h>
int main() 
{
    int a = 42;
    short int b = 12345;
    long c = 1234567890;
    unsigned int d = 4294967295;
    signed char e = 'A';
    float f = 3.14159;
    double g = 2.71828;
    long double h = 1.4142135623730951;
    char i = 'C';
    bool booleanVar = true;
    int* iPtr = NULL;
    double* dPtr = NULL;
    enum Color { RED, GREEN, BLUE };
    enum Color colorVar = RED;
    int Arr[6] = { 0, 1, 2, 3, 4, 5};
    struct Point
    {
        int x,y;
    };
    struct Point pointVar = {10, 20};
    union Data 
    {
        int j;
        double k;
    };
    union Data dataVar;
    dataVar.j = 28;
    void* voidPtr = NULL;
    size_t l = sizeof(int);
    long long k = 123456789012345;

    printf("Integer: %d\n", a);
    printf("Short: %d\n", b);
    printf("Long: %ld\n", c);
    printf("Unsigned Int: %u\n", d);
    printf("Char: %c\n", e);
    printf("Float: %f\n", f);
    printf("Double: %lf\n", g);
    printf("Long Double: %Lf\n", h);
    printf("Character: %c\n", i);
    printf("Boolean: %d\n", booleanVar);
    printf("Pointer to int: %p\n", (void*)iPtr);
    printf("Pointer to double: %p\n", (void*)dPtr);
    printf("Enum: %d\n", colorVar);
    printf("Array: %d\n", Arr[0]);
    printf("Structure: (%d, %d)\n", pointVar.x, pointVar.y);
    printf("Union: %d\n", dataVar.j);
    printf("Pointer to Void: %p\n", voidPtr);
    printf("Size_t: %zu\n", l);
    printf("Long Long: %lld\n", k);

    return 0;
}
