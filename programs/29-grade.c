//  Kashish Ahuja
//  Program to find grade of student

#include<stdio.h>
#include<conio.h>

void main()
{
    float cgpa;
    char grade;
    printf("Enter CGPA of student: ");
    scanf("%f",&cgpa);
    if(cgpa>=0 && cgpa<=10)
    {
        if(cgpa>9)
            grade='A';
        else if(cgpa>7.5)
            grade='B';
        else if(cgpa>6)
            grade='C';
        else if(cgpa>4.5)
            grade='D';
        else if(cgpa>3)
            grade='E';
        else
            grade='F';
        printf("Grade of student is %c",grade);
    }
    else
        printf("Enter valid CGPA.");
    getch();
} 