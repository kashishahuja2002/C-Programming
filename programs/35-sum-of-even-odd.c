//  Kashish Ahuja
//  Program to find sum of all even and odd integers upto a number

#include<stdio.h>
#include<conio.h>

void main()
{
    int num, even=0, odd=0, i=1;
    printf("Enter a number: ");
    scanf("%d",&num);
    while(i<=num)
    {
        if(i%2==0)
            even=even+i;
        else    
            odd=odd+i;
        i++;
    }
    printf("Upto %d, the sum of all even integers is %d and of all odd integers is %d",num,even,odd);
    getch();
}