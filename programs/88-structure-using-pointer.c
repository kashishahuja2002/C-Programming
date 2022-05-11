//  Kashish Ahuja
//  Program for structure using pointer using structure of employee

#include<stdio.h>
#include<conio.h>
#include<string.h>

struct Employee
{
    int empno;
    char name[20];
    long salary;
};

void main()
{
    struct Employee e, *ptr;
    ptr=&e;
    printf("\n\nEnter details of employee... ");
    printf("\nEnter employee number: ");
    scanf("%d",&ptr->empno);
    fflush(stdin);
    printf("Enter name: ");
    gets(ptr->name);
    printf("Enter Salary: ");
    scanf("%ld",&ptr->salary);

    printf("\n\nDetails of employee... ");
    printf("\nEmployee No.\t\tName\t\tSalary");
    printf("\n-----------------------------------------------------------------");
    printf("\n%ld\t\t\t%s\t\t%ld",ptr->empno, ptr->name, ptr->salary);
}
