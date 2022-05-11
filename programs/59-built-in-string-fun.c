//  Kashish Ahuja
//  Program for built-in string functions

#include<stdio.h>
#include<conio.h>
#include<string.h>

void main()
{
    char str_a[20], str_b[20], str_c[20];
    int len, n;
    printf("Enter a string: ");
    gets(str_a);

    //  strlen()
    len=strlen(str_a);
    printf("\nLength of the string: %d",len);

    //  strlwr()
    printf("\n\nString in lower case: ");
    puts(strlwr(str_a));

    //  strupr()
    printf("\nString in upper case: ");
    puts(strupr(str_a));

    //  strrev()
    printf("\nString in reversed form: ");
    puts(strrev(str_a));

    //  strcpy()
    strcpy(str_b,str_a);
    printf("\nString B: ");
    puts(str_b);

    //  strcmp()
    n=strcmp(str_a,str_b);
    if(n==0)
        printf("\nThe strings are same.");
    else
        printf("\nThe strings are not same.");
    printf("\nn: %d",n);

    printf("\n\nEnter two strings for concatanation. ");
    printf("\nString A: ");
    gets(str_a);
    printf("\nString B: ");
    gets(str_b);

    //  strcat()
    strcat(str_a,str_b);
    printf("\nString after concatanation: ");
    puts(str_a);

    //  strcmp()
    n=strcmp(str_a,str_b);
    if(n==0)
        printf("\nThe strings are same.");
    else
        printf("\nThe strings are not same.");
    printf("\nn: %d",n);

    getch();
} 
