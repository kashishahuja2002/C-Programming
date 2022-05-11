//  Kashish Ahuja
//  Program for string

#include<stdio.h>
#include<conio.h>

void main()
{
    char str[20];
    printf("Enter a string: ");
    scanf("%s",&str);
    printf("String (scanf): %s",str);
    fflush(stdin);
    printf("\n\nEnter a string: ");
    gets(str);
    printf("String (gets): ");
    puts(str);
    getch();
} 
