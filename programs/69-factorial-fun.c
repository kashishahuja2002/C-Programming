//  Kashish Ahuja
//  Program to find factorial of a number by all three type of functions

#include<stdio.h>
#include<conio.h>

void fact1();
void fact2(int);
int fact3(int);

void main()
{
    fact1();
    int num;
    printf("\n\n(II type) Enter a number: ");
    scanf("%d",&num);
    fact2(num);
    printf("\n\n(III type) Enter a number: ");
    scanf("%d",&num);
    int fact;
    fact=fact3(num);
    printf("Factorial of %d is %d",num,fact);
    getch();
}

void fact1()
{
    int num, org, fact=1;
    printf("(I type) Enter a number: ");
    scanf("%d",&num);
    org = num;
    while(num>=1)
    {
        fact=fact*num;
        num--;
    }
    printf("Factorial of %d is %d",org,fact);
}

void fact2(int num)
{
    int org, fact=1;
    org = num;
    while(num>=1)
    {
        fact=fact*num;
        num--;
    }
    printf("Factorial of %d is %d",org,fact);
}

int fact3(int num)
{
    int fact=1;
    while(num>=1)
    {
        fact=fact*num;
        num--;
    }
    return fact;
}



