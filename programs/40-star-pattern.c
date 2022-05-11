//  Kashish Ahuja
//  Program to print star pattern and reverse star pattern

#include<stdio.h>
#include<conio.h>

void main()
{
    int num;
    printf("Enter a number: ");
    scanf("%d",&num);

    //  Star Pattern
    printf("\nStar Pattern");
    for(int i=1; i<=num; i++)
    {
        printf("\n");
        for(int j=1; j<=i; j++)
            printf("*");
    }

    //  Reverse Star Pattern
    printf("\n\nReverse Star Pattern");
    for(int i=num; i>0; i--)
    {
        printf("\n");
        for(int j=1; j<=i; j++)
            printf("*");
    }

    getch();
} 
