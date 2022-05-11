//  Kashish Ahuja
//  Program to print even matrix and odd matrix

#include<stdio.h>
#include<conio.h>

void main()
{
    int num;
    printf("Enter a number: ");
    scanf("%d",&num);
    
    //  even matrix
    printf("\nEven Matrix");
    int even=2;
    for(int i=1; i<=num; i++)
    {
        printf("\n");
        for(int j=1; j<=3; j++)
        {
            printf("%d ",even);
            even=even+2;
        }
    }

    //  odd matrix
    printf("\n\nOdd Matrix");
    int odd=1;
    for(int i=1; i<=num; i++)
    {
        printf("\n");
        for(int j=1; j<=3; j++)
        {
            printf("%d ",odd);
            odd=odd+2;
        }
    }

    getch();
}
