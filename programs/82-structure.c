//  Kashish Ahuja
//  Program for structure of student

#include<stdio.h>
#include<conio.h>
#include<string.h>

struct Student
{
    int rollno;
    char name[10];
    float per;
};

int main()   
{
    struct Student s1;      //object
    printf("Enter details of student...");
    printf("\nEnter roll no.: ");
    scanf("%d",&s1.rollno);
    fflush(stdin);
    printf("Enter name: ");
    gets(s1.name);
    printf("Enter percentage: ");
    scanf("%f",&s1.per);
    printf("\n\nDetails of student...");
    printf("\n\nRoll no.: %d",s1.rollno);
    printf("\nName: %s",s1.name);
    printf("\nPercentage: %f",s1.per);
    return 0;
}

