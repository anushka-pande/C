#include<stdio.h>
#include<string.h>
struct employee
{
    char name[50];
    char address[100];
    int salary;
    char designation;
    int mobileNo;
};
void getdata(struct employee *Employee)
{
    printf("Enter employee name:\n");
    scanf("%s",employee.name);
    printf("Enter employee address:\n");
    scanf("%s",employee.address);
    printf("Enter employee salary:\n");
    scanf("%d",&employee.salary);
    printf("Enter employee designation:\n");
    scanf("%s",employee.designation);
    printf("Enter employee mobile number:\n");
    scanf("%d", &employee.mobileNo);
}
void printdata(struct employee *Employee) 
{
    printf("Employee Information:\n");
    printf("Name: %s\n",employee.name);
    printf("Address: %s\n",employee.address);
    printf("Salary: %d\n",employee.salary);
    printf("Designation: %s\n",employee.designation);
    printf("Mobile Number: %d\n",employee.mobileNo);
}
int main()
{
    int n;
    printf("Enter number of Employees:");
    scanf("%d",&n);
    struct employee Employee[n];
    printf("Enter information\n");
    for(int i=0;i<n;i++)
    {
        printf("For employee:%d\n",i+1);
        getdata(&Employee[i]);
    }
    printf("Employee details:\n");
    for(int i=0;i<n;i++)
    {
        printdata(&Employee[i]);
    }
    return 0;
}