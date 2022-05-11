//  Kashish Ahuja
//  Program to display ASCII value of a character and to display character corresponding to an ASCII value 

#include<stdio.h>
#include<conio.h>

void main()
{
    //  ASCII value of a character
    char ch;
    printf("Enter a character: ");
    scanf("%c",&ch);
    printf("The ASCII value of %c is %d",ch,ch);

    //  character corresponding to an ASCII value
    int x;
    printf("Enter an ASCII value: ");
    scanf("%d",&x);
    printf("The character corresponding to ASCII value %d is %c",x,x);

    getch();
} 
