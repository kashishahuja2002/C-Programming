//  Kashish Ahuja
//  Program to change case of string without using built-in function

#include<stdio.h>
#include<conio.h>

void main()
{
    char str[20];
    int i;
    printf("Enter a string: ");
    gets(str);
    for(i=0; str[i]!='\0'; i++)
    {
        if(str[i]>=65 && str[i]<=90)
            str[i]+=32;
        else if(str[i]>=97 && str[i]<=126)      
            str[i]-=32;
        //  These is an if condition after else because otherwise the string would only be printed till first space because ASCII value of space is 32, so 32-32=0 and 0 is the ASCII value for \0, so puts will get \0 and it will terminate the string.
    }
    printf("\nString: ");
    puts(str);
    getch();
} 
