//  Kashish Ahuja
//  Program to make a calculator

#include<stdio.h>
#include<conio.h>

void main()
{
    int x,y;
    printf("Enter two numbers: ");
    scanf("%d %d",&x, &y);
    printf("\nAddition = %d",(x+y));
    printf("\nSubtraction = %d",(x-y));
    printf("\nMultiplication = %d",(x*y));
    printf("\nDivision = %d",(x/y));
    printf("\nModulus = %d",(x%y));
    getch();
}