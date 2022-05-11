//  Kashish Ahuja
//  Program to make calculator by all three type of functions

#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

void cal1();
void cal2(int, int, int);
int cal3(int, int, int);

void main()
{
        printf(".....CALCULATOR.....");
        printf("\n1) Addition\n2) Sybtraction\n3) Multiplication\n4) Division");

        cal1();

        int opr, x, y;

        printf("\n\n(II type) Enter the operation you want to perform: ");
        scanf("%d",&opr); 
        if(opr>=1 && opr<=4)
        {
        printf("Enter two numbers for performing operation: ");
        scanf("%d %d",&x,&y);
        }
        cal2(opr, x, y);

        printf("\n\n(III type) Enter the operation you want to perform: ");
        scanf("%d",&opr); 
        if(opr>=1 && opr<=4)
        {
        printf("Enter two numbers for performing operation: ");
        scanf("%d %d",&x,&y);
        }
        int result;
        result=cal3(opr,x,y);
        printf("Result = %d", result);

        getch();
}

void cal1()
{
        printf("\n\n(I type) Enter the operation you want to perform: ");
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
}

void cal2(int opr, int x, int y)
{
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
}

int cal3(int opr, int x, int y)
{
    switch(opr)
    {
        case 1: return x+y;
                break;

        case 2: return x-y;
                break;

        case 3: return x*y;
                break;

        case 4: return x/y;
                break;

        default: 
            printf("Select valid operation.");
            getch();
            exit(1);
    }
}



