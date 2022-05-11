//  Kashish Ahuja
//  Program for finding greater number

#include<stdio.h>
#include<conio.h>

void main()
{
    int a,b;
    printf("Enter two numbers: ");
    scanf("%d %d",&a, &b);
    (a>b)?printf("\n%d is greater.",a):printf("\n%d is greater.",b);
    getch();
}