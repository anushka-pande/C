#include<stdio.h>
struct student
{
    char name[50];
    char address[100];
    int mobileno;
};
void getdata(struct student *Student)
{
    printf("Enter student name:\n");
    scanf("%s",student.name);
    printf("Enter student address:\n");
    scanf("%s",student.address);
    printf("Enter student mobileno:\n");
    scanf("%d",&student.mobileno);
}
void printdata(struct student *Student) 
{
    printf("Student Information:\n");
    printf("Name: %s\n",student.name);
    printf("Address: %s\n",student.address);
    printf("Mobile Number: %d\n",student.mobileNo);
}
int main()
{
    int n;
    printf("Enter number of Students:");
    scanf("%d",&n);
    struct student Student[n];
    printf("Enter information\n");
    for(int i=0;i<n;i++)
    {
        printf("For Student:%d\n",i+1);
        getdata(&Student[i]);
    }
    printf("Student details:\n");
    for(int i=0;i<n;i++)
    {
        printdata(&Student[i]);
    }
    return 0;
}