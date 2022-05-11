//  Kashish Ahuja
//  Program to count a particular character in a string

#include<stdio.h>
#include<conio.h>
#include<string.h>

void main()
{
    char str[30], ch;
    int i, count=0;
    printf("Enter a string: ");
    gets(str);
    printf("\nEnter the character to count: ");
    scanf("%c",&ch);
    for(i=0; str[i]!='\0'; i++)
    {
        if(str[i]==ch)
            count++;
    }
    printf("The character %c appears %d times in the string.",ch,count);
    
    getch();
} 
