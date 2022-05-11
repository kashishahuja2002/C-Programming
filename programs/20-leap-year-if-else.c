//  Kashish Ahuja
//  Program to check leap year in a single if statement

#include<stdio.h>
#include<conio.h>

void main()
{
    int year;
    printf("Enter an year: ");
    scanf("%d",&year);

    if(year%4==0 && (year%400==0 || year%100!=0))
        printf("\n%d is a leap year",year);
    else
        printf("\n%d is not a leap year",year);

    getch();
}