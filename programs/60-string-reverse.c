//  Kashish Ahuja
//  Program to reverse a string without using built-in function

#include<stdio.h>
#include<conio.h>

void main()
{
    char str_a[100], str_b[100];
    int i, len=0;
    printf("Enter a string: ");
    gets(str_a);

    for(i=0; str_a[i]!='\0'; i++)
        len++;
    
    for(i=0; i<len; i++)
        str_b[(len-1)-i]=str_a[i];

    str_b[len]='\0';
    printf("Reversed string: ");
    puts(str_b);
    getch();
} 
