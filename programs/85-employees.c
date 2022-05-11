//  Kashish Ahuja
//  Program to display record of employees in assending order of their salaries

#include<stdio.h>
#include<conio.h>
#include<string.h>
#define MAX 3

struct Employee
{
    int empno;
    char name[20];
    long salary;
};

void main()
{
    struct Employee e[MAX];
    int i;
    for(i=0; i<MAX; i++)
    {
        printf("\n\nEnter details of employee %d... ",i+1);
        printf("\nEnter employee number: ");
        scanf("%d",&e[i].empno);
        fflush(stdin);
        printf("Enter name: ");
        gets(e[i].name);
        printf("Enter Salary: ");
        scanf("%ld",&e[i].salary);
    }
    for(int j=0; j<MAX-1; j++)
    {
        for(int k=0; k<MAX; k++)
        {
            if(e[k].salary>e[k+1].salary)
            {
                int tempempno;
                tempempno=e[k].empno;
                e[k].empno=e[k+1].empno;
                e[k+1].empno=tempempno;

                char tempname[20];
                strcpy(tempname, e[k].name);
                strcpy(e[k].name, e[k+1].name);
                strcpy(e[k+1].name, tempname);

                long tempsalary;
                tempsalary=e[k].salary;
                e[k].salary=e[k+1].salary;
                e[k+1].salary=tempsalary;
            }
        }
    }

    printf("\n\nDetails of employees... ");
    printf("\nSr. No.\t\tEmployee No.\t\tName\t\tSalary");
    printf("\n-----------------------------------------------------------------");
    for(i=0; i<MAX; i++)
    {
        printf("\n%d\t\t%ld\t\t\t%s\t\t%ld",i+1, e[i].empno, e[i].name, e[i].salary);
    }
}
