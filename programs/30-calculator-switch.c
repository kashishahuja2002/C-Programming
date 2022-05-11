//  Kashish Ahuja
//  Program to make a calculator using switch

#include<stdio.h>
#include<conio.h>

void main()
{
    printf(".....CALCULATOR.....");
    printf("\n1) Addition\n2) Subtraction\n3) Multiplication\n4) Division");
    printf("\nEnter the operation you want to perform: ");
    int opr;
    scanf("%d",&opr); 
    int x,y;
    if(opr>=1 && opr<=4)
    {
        printf("Enter two numbers for performing operation: ");
        scanf("%d %d",&x,&y);
    }
    int result,e=0;
    switch(opr)
    {
        case 1: result=x+y;
                break;

        case 2: result=x-y;
                break;

        case 3: result=x*y;
                break;

        case 4: result=x/y;
                break;

        default: 
            printf("Select valid operation.");
            e=1;
    }
    if(e==0)
        printf("Result = %d", result);
    getch();
} 