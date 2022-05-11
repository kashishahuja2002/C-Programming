//  Kashish Ahuja
//  Miscellaneous question 4
//  Program to check even or odd without using conditional statements

#include<stdio.h>
#include<conio.h>

void main()
{
    int num, i=10, cnt;
    printf("Enter a num: ");
    scanf("%d",&num);
    while(i!=0 && i!=1)
    {
        i=num%2;
        cnt=i;
    }
    while(cnt==0)
    {
        printf("\n%d is even",num);
        cnt=cnt+10;
    }
    while(cnt==1)
    {
        printf("\n%d is odd",num);
        cnt=cnt+10;
    }
}