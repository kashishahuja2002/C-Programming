//  Kashish Ahuja
//  Program to find longest word in string

#include<stdio.h>
#include<conio.h>
#include<string.h>

void main()
{
    char str[100];
    int i, st, en, j=0, count=0;
    printf("Enter a string: ");
    gets(str);
    
    for(i=0; str[i]!='\0'; i++)
    {
        if(str[i]!=32)
            j++;
        else if(str[i]==32)
            j=0;

        if(j>count)
        {
            count=j;
            st=(i-j)+1;
            en=i+1;
        }   
    }

    printf("Longest word is: ");
    for(i=st; i<en; i++)
        printf("%c",str[i]);
    getch(); 
} 
