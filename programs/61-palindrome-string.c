//  Kashish Ahuja
//  Program to check if string is a palindrome

#include<stdio.h>
#include<conio.h>
#include<string.h>

void main()
{
    char str_a[100], str_b[100];
    int n;
    printf("Enter a string: ");
    gets(str_a);
    strcpy(str_b,str_a);
    strrev(str_b);
    n=strcmp(str_a,str_b);
    if(n==0)
        printf("String is a palindrome.");
    else    
        printf("String is not a palindrome.");
    getch();
} 
