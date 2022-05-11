//  Kashish Ahuja
//  Program to find reverse of a number

#include<stdio.h>
#include<conio.h>

void main()
{
    int num, rev=0, mid;
    printf("Enter a number: ");
    scanf("%d", &num);
    while(num!=0)
    {
        mid=num%10;
        rev= rev*10 + mid;
        num=num/10;
    }
    printf("Reverse of number is: %d",rev);
    getch();
}