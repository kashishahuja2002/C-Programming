//  Kashish Ahuja
//  Program for finding maximum number using conditional operators

#include<stdio.h>
#include<conio.h>

void main()
{
    int a,b,c;
    printf("Enter three numbers: ");
    scanf("%d %d %d",&a, &b, &c);
    (a>b && a>c)?printf("\n%d is maximum.",a):((b>a && b>c)?printf("\n%d is maximum.",b):printf("\n%d is maximum.",c));
    getch();
}