//  Kashish Ahuja
//  Program to change first letter of every word into upper case

#include<stdio.h>
#include<conio.h>

void main()
{
    char str[200];
    int i;
    printf("Enter a string: ");
    gets(str);
    if(str[0]>=97 && str[0]<=126)      
        str[0]-=32;
    for(i=0; str[i]!='\0'; i++)
    {
        if(str[i]==32)
        {
            i++;
            if(str[i]>=97 && str[i]<=126)      
                str[i]-=32;
        }
    }
    printf("\nString: ");
    puts(str);
    getch();
} 
