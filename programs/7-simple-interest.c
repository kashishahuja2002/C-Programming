//  Kashish Ahuja
//  Program to find simple interest

#include<stdio.h>
#include<conio.h>

void main()
{
    int p, t;
    float r, si;

    printf("Enter principal amount, rate and time: ");
    scanf("%d %f %d", &p, &r, &t);
    si=(p*r*t)/100;
    printf("Simple interest: %f", si);
    getch();
}