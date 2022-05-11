//  Kashish Ahuja
//  Program for company selection criteria 
#include<stdio.h>
#include<conio.h>

void main()
{
    float th10;
    printf("Enter 10th percentage: ");
    scanf("%f",&th10);
    if(th10>=85.00)
    {
        printf("Enter 12th percentage: ");
        float th12;
        scanf("%f",&th12);
        if(th12>=80.00)
        {
            printf("Enter UG CGPA: ");
            float UG;
            scanf("%f",&UG);
            if(UG>=7.50)
            {
                printf("Enter PG CGPA: ");
                float PG;
                scanf("%f",&PG);
                if(PG>=7.00)
                    printf("You are selected.");
                else
                    printf("You are not selected.");
            }
            else
                printf("You are not selected.");
        }
        else
            printf("You are not selected.");
    }
    else
        printf("You are not selected.");
    getch();
}