#include <stdio.h>
struct Student {
    char name[50];
    char address[100];
    char mobileNumber[30];
};
int main() 
{
    int n,i;
    printf("Enter the number of students: ");
    scanf("%d", &n);
    struct Student students[n];
    for(i=0;i<n;i++) 
    {
        printf("Enter details for Student %d:\n", i + 1);
        printf("Name: ");
        scanf("%s", students[i].name);
        printf("Address: ");
        scanf("%s", students[i].address);
        printf("Mobile Number: ");
        scanf("%s", students[i].mobileNumber);
    }
    printf("\nStudent Information:\n");
    for(i=0;i<n;i++) 
    {
        printf("Student %d:\n", i + 1);
        printf("Name: %s\n", students[i].name);
        printf("Address: %s\n", students[i].address);
        printf("Mobile Number: %s\n", students[i].mobileNumber);
    }
    return 0;
}
