//  Kashish Ahuja
//  Program to find factorial of a number

#include<stdio.h>
#include<conio.h>

void main()
{
    int num, org, fact=1;
    printf("Enter a number: ");
    scanf("%d",&num);
    org = num;
    while(num>=1)
    {
        fact=fact*num;
        num--;
    }
    printf("Factorial of %d is %d",org,fact);
    getch();
}