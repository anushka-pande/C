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
void addEmployee(struct Employee *employee) 
{
    printf("Enter employee name: ");
    scanf(" %[^\n]", employee->name);
    printf("Enter employee designation: ");
    scanf(" %[^\n]", employee->designation);
    printf("Enter employee phone number: ");
    scanf(" %s", employee->phone_number);
    printf("Enter employee address: ");
    scanf(" %[^\n]", employee->address);
    printf("Enter employee salary: ");
    scanf("%f", &employee->salary);
}
void displayEmployee(const struct Employee *employee) 
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
    printf("Enter the number of employees:\n");
    scanf("%d", &n);
    struct Employee employees[n];
    for (int i = 0; i < n; i++) {
        printf("Adding details for Employee %d:\n", i + 1);
        addEmployee(&employees[i]);
    }
    printf("Employee Information:\n");
    for (int i = 0; i < n; i++) {
        printf("Displaying details for Employee %d:\n", i + 1);
        displayEmployee(&employees[i]);
    }
    return 0;
}
