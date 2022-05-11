//  Kashish Ahuja
//  Program to compare two variables using if

#include<stdio.h>
#include<conio.h>
#include<math.h>

void main()
{   
    int a,b;
    printf("\nEnter two numbers: ");
    scanf("%d %d",&a, &b);
    if(a==b)
        printf("%d and %d are equal.",a, b);
    if(a>b)
        printf("%d is greater than %d.",a, b);
    if(a<b)
        printf("%d is less than %d.",a, b);
    getch();
}