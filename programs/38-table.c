//  Kashish Ahuja
//  Program to print table of a number

#include<stdio.h>
#include<conio.h>

void main()
{
    int num, i=1;
    printf("Enter a number: ");
    scanf("%d",&num);
    printf("\nTable of %d",num);
    while(i<=10)
    {
        printf("\n%d * %d = %d", num, i, (num*i));
        i++;
    }
    getch();
} 
