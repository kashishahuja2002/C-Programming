//  Kashish Ahuja
//  Program for built-in functions in ctype header file

#include<stdio.h>
#include<conio.h>
#include<ctype.h>

void main()
{
    char ch, c;
    printf("Enter a character: ");
    scanf("%c",&ch);

    //  tolower()
    c=tolower(ch);
    printf("\nChar in lower case: %c",c);

    //  toupper()
    c=toupper(ch);
    printf("\nChar in upper case: %c",c);

    //  islower()
    if(islower(ch))
        printf("\nChar is in lower case");
    else
        printf("\nChar is not in lower case");

    //  isupper()
    if(isupper(ch))
        printf("\nChar is in upper case");
    else
        printf("\nChar is not in upper case");

    //  isdigit()
    if(isdigit(ch))
        printf("\nChar in a digit");
    else
        printf("\nChar in not a digit");

    //  isalpha()
    if(isalpha(ch))
        printf("\nChar in an alphabet");
    else
        printf("\nChar in not an alphabet");

    //  isalnum()
    if(isalnum(ch))
        printf("\nChar in an alphabet or a number");
    else
        printf("\nChar in not an alphabet or a number");

    getch();
} 
