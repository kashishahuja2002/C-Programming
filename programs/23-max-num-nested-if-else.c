//  Kashish Ahuja
//  Program to find maximum number using nested if else

#include<stdio.h>
#include<conio.h>

void main()
{
    int a,b,c;
    printf("Enter three numbers: ");
    scanf("%d %d %d",&a, &b, &c);
    if(a>b)
    {
        if(a>c)
            printf("\n%d is maximum.",a);
        else
            printf("\n%d is maximum.",c);
    }
    else if(b>a)
    {
        if(b>c)
            printf("\n%d is maximum.",b);
        else
            printf("\n%d is maximum.",c);
    }
    else
        printf("All the numbers are equal.");
    getch();
} 