//  Kashish Ahuja
//  Program to find percentage

#include<stdio.h>
#include<conio.h>

void main()
{
    printf("Enter marks of 5 subjects: ");
    int a,b,c,d,e;
    float per;
    scanf("%d %d %d %d %d", &a, &b, &c, &d, &e);
    per=(a+b+c+d+e)/5;
    printf("Percentage is: %.2f", per);
    getch();
}