#include <stdio.h>
#include <string.h>
struct Employee 
{
    char name[50];
    char designation[50];
    char phone_number[15];
    char address[100];
    float salary;
};
void addData(struct Employee *employee) 
{
    printf("Enter employee name: ");
    scanf("%s", employee->name);
    printf("Enter employee designation: ");
    scanf("%s", employee->designation);
    printf("Enter employee phone number: ");
    scanf("%s", employee->phone_number);
    printf("Enter employee address: ");
    scanf("%s", employee->address);
    printf("Enter employee salary: ");
    scanf("%f", &employee->salary);
}
void displayData(const struct Employee *employee) 
{
    printf("Name: %s\n", employee->name);
    printf("Designation: %s\n", employee->designation);
    printf("Phone Number: %s\n", employee->phone_number);
    printf("Address: %s\n", employee->address);
    printf("Salary: %.2f\n", employee->salary);
}
int main() 
{
    int n;
    printf("Enter the number of employees: ");
    scanf("%d", &n);
    struct Employee employees[n];
    for (int i = 0; i < n; i++) {
        printf("\nAdding details for Employee %d:\n", i + 1);
        addData(&employees[i]);
    }
    printf("Employee Information\n");
    for (int i = 0; i < n; i++) {
        printf("\nDisplaying details for Employee %d:\n", i + 1);
        displayData(&employees[i]);
    }
    return 0;
}
