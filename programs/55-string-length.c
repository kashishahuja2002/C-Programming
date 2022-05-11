//  Kashish Ahuja
//  Program to find length of string without using built-in function

#include<stdio.h>
#include<conio.h>

void main()
{
    char str[20];
    int i, len=0;
    printf("Enter a string: ");
    gets(str);
    for(i=0; str[i]!='\0'; i++)
    {
        len++;
    }
    printf("\nLength: %d",len);
    getch();
} 
