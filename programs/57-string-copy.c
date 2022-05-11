//  Kashish Ahuja
//  Program to copy one string into another without using built-in function

#include<stdio.h>
#include<conio.h>

void main()
{
    char str_a[100], str_b[100];
    int i;
    printf("Enter a string: ");
    gets(str_a);
    for(i=0; str_a[i]!='\0'; i++)
    {
        str_b[i]=str_a[i];
    }
    str_b[i]='\0';
    printf("Copied string: ");
    puts(str_b);
    getch();
} 
