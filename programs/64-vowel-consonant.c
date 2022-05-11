//  Kashish Ahuja
//  Program to count number of vowels and consonants in a string

#include<stdio.h>
#include<conio.h>

void main()
{
    char str[30];
    int i, vowel=0, consonant=0;
    printf("Enter a string: ");
    gets(str);
    
    for(i=0; str[i]!='\0'; i++)
    {
        if(str[i]>=65&&str[i]<=90 || str[i]>=97&&str[i]<=126)
        {
            if(str[i]=='A' || str[i]=='a' || str[i]=='E' || str[i]=='e' || str[i]=='I' || str[i]=='i' || str[i]=='O' || str[i]=='o' || str[i]=='U' || str[i]=='u')
                vowel++;
            else
                consonant++;
        }
    }
    printf("There are %d vowels and %d consonants in the string.",vowel,consonant);

    getch();
} 