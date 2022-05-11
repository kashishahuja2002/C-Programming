//  Kashish Ahuja
//  Program to generate fibonacci series 

#include<stdio.h>
#include<conio.h>

void main()
{
    int num, f1=1, f2=2, i=3, a=1, b=2, c;
    printf("Enter a number upto which you want to print fabonacci series: ");
    scanf("%d",&num);
    switch(num)
    {
        case 1: printf("\n%d",f1);
                break;

        case 2: printf("\n%d",f1);
                printf("\n%d",f2);
                break; 
            
        default:    printf("\n%d",f1);
                    printf("\n%d",f2);
                    while(i<=num)
                    {
                        c=a+b;
                        printf("\n%d",c);
                        a=b;
                        b=c;
                        i++;
                    }
    }
    getch();
}