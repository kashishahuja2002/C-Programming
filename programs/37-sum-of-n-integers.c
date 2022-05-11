//  Kashish Ahuja
//  Program to find sum of first n integers

#include<stdio.h>
#include<conio.h>

void main()
{
    int n, i=1, sum=0;
    printf("Enter the value of n: ");
    scanf("%d",&n);
    while(i<=n)
    {
        sum=sum+i;
        i++;
    }
    printf("The sum of first %d integers is %d",n,sum);
    getch();
} 
