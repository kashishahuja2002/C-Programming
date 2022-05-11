//  Kashish Ahuja
//  Program for addition of two variables

#include<stdio.h>
#include<conio.h>

void main()
{
    int x, y, sum;
    printf("Enter two numbers: ");
    scanf("%d %d", &x, &y);
    sum=x+y;
    printf("The sum of two variables: %d", sum);
    getch();
}