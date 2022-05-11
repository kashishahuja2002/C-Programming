//  Kashish Ahuja
//  Program to pass string in function using example of longest word

#include<stdio.h>
#include<conio.h>
#include<string.h>

void longest(char[]);
int i,j=0,n;

int main()
{
    char str[30];
    printf("Enter a string: ");
    gets(str);
    longest(str);

    return 0;
}

void longest(char str[])
{
    int len=strlen(str);
    char word[30], longest[30]="\0";
    for(i=0; i<=len; i++)
    {
        if(str[i]==' ' || str[i]=='\0')
        {
            word[j]='\0';
            if(strlen(word)>strlen(longest))
                strcpy(longest,word);
            j=0;
        }
        else
        {
            word[j]=str[i];
            j++;
        }

        // if(str[i]!=' ' && str[i]!='\0')
        // {
        //     word[j]=str[i];
        //     j++;
        // }
        // else
        // {
        //     word[j]='\0';
        //     if(strlen(word)>strlen(longest))
        //         strcpy(longest,word);
        //     j=0;
        // }
    }
    puts(longest);
}