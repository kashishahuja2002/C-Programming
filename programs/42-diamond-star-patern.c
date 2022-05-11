//  Kashish Ahuja
//  Program to print diamond star pattern

#include<stdio.h>
#include<conio.h>

void main()
{
    int num, space;
    printf("Enter a number: ");
    scanf("%d",&num);

    for(int i=1; i<=num; i++)
    {
        printf("\n");
        space=num-i;
        for(int j=1; j<=space; j++)
            printf(" ");
        for(int k=1; k<=i; k++)
            printf("* ");
    }
    
    for(int i=(num-1); i>=1; i--)
    {
        printf("\n");
        space=num-i;
        for(int j=1; j<=space; j++)
            printf(" ");
        for(int k=1; k<=i; k++)
            printf("* ");
    }

    printf("\n\n\n\n");
    getch();
} 
