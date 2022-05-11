//  Kashish Ahuja
//  Program to check if a character is a vowel 

#include<stdio.h>
#include<conio.h>

void main()
{
    char ch;
    printf("Enter a character: ");
    scanf("%c",&ch);
    if(ch=='A' || ch=='a' || ch=='E' || ch=='e' || ch=='I' || ch=='i' || ch=='O' || ch=='o' || ch=='U' || ch=='u')
        printf("\n%c is a vowel",ch);
    else
        printf("\n%c is a consonant",ch);

    getch();
} 
