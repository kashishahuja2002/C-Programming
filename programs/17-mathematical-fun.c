//  Kashish Ahuja
//  Program to use mathematical functions

#include<stdio.h>
#include<conio.h>
#include<math.h>

void main()
{   
    int a,b,c;
    printf("\nEnter a number to find square root: ");
    scanf("%d",&a);
    printf("Square root of %d is %f",a,sqrt(a));
    printf("\n\nEnter numbers to find power:- ");
    printf("\nBase: ");
    scanf("%d",&a);
    printf("Power: ");
    scanf("%d",&b);
    c=pow(a,b);
    printf("%d raised to the power of %d is %d",b,a, c);
    getch();
}