//  Kashish Ahuja
//  Program for printf(), scanf(), and fflush(stdin) function

#include<stdio.h>
#include<conio.h>

void main()
{
    int x;
    printf("Enter a number: ");
    scanf("%d",&x);
    printf("%d",x);
    
    fflush(stdin);
    
    char ch;
    printf("\nEnter a character: ");
    scanf("%c",&ch);
    printf("%c",ch);
    getch();
}