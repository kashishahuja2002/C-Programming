//  Kashish Ahuja
//  Program for structure in function using structure of student

#include<stdio.h>
#include<conio.h>
#include<string.h>
#define MAX 1

struct Student
{
    int rollno, marks[5], total;
    char name[10];
    float per;
};

void total(struct Student);
void percentage(struct Student);

void main()   
{
    struct Student s[MAX];      //object
    int i;
    for(i=0; i<MAX; i++)
    {
        printf("\n\nEnter details of student %d... ",i+1);
        printf("\nEnter roll number: ");
        scanf("%d",&s[i].rollno);
        fflush(stdin);
        printf("Enter name: ");
        gets(s[i].name);
        printf("Enter marks of 5 subjects: ");
        for(int j=0; j<5; j++)
        {
            scanf("%d",&s[i].marks[j]);
        }
    }

    for(i=0; i<MAX; i++)
    {
        printf("\n\nDetails of student %d... ",i+1);
        printf("\nRoll number: %d",s[i].rollno);
        printf("\nName: %s",s[i].name);
        printf("\nMarks of 5 subjects: ");
        for(int j=0; j<5; j++)
        {
            printf("%d ",s[i].marks[j]);
        }
        total(s[i]);
        percentage(s[i]);
    }
}


void total(struct Student s)
{
    int sum=0;
    for(int l=0; l<5; l++)
    {
        sum=sum+s.marks[l];
    }
    printf("\nTotal of all marks: %d",sum);
}

void percentage(struct Student s)
{
    float percen;
    int sum=0;
    for(int l=0; l<5; l++)
    {
        sum=sum+s.marks[l];
    }
    percen=sum/5;
    printf("\nPercentage of student: %.2f%%",percen);
}