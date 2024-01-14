#include <stdio.h>
struct employee {
    char name[50];
    char address[100];
    int salary;
    char designation;
    char mobileNumber[30];
};
int main() 
{
    int n,i;
    printf("Enter the number of employee: ");
    scanf("%d", &n);
    struct Student employee[n];
    for(i=0;i<n;i++) 
    {
        printf("Enter details for employee %d:\n", i + 1);
        printf("Name: ");
        scanf("%s",employee[i].name);
        printf("Address: ");
        scanf("%s",employee[i].address);
        printf("Salary: ");
        scanf("%d",&employee[i].salary);
        printf("Designation:");
        scanf("%s",employee[i].designation);
        printf("Mobile Number: ");
        scanf("%d",&employee[i].mobileNumber);
    }
    printf("\nEmployee Information:\n");
    for(i=0;i<n;i++) 
    {
        printf("Employee %d:\n", i + 1);
        printf("Name: %s\n", employee[i].name);
        printf("Address: %s\n", employee[i].address);
        printf("Mobile Number: %s\n", employee[i].mobileNumber);
        printf("\n");
    }
    return 0;
}
