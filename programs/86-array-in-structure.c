//  Kashish Ahuja
//  Program for integer array within structure using structure of student

#include<stdio.h>
#include<conio.h>
#include<string.h>
#define MAX 1

struct Student
{
    int rollno, marks[5];
    char name[10];
};

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
    }
}

