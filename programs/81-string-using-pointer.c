//  Kashish Ahuja
//  Program for string using pointer

#include<stdio.h>
#include<conio.h>
#include<string.h>

void main()
{
    char str[15], *ptr;

    printf("Enter string: ");
    gets(str);

    ptr=&str[0];
    while(*ptr!='\0')
    {
        printf("\nAddress of %c is %u.",*ptr,ptr);
        ptr++;
    }   
}