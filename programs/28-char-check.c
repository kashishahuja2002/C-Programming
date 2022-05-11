//  Kashish Ahuja
//  Program to check characters using ASCII values and using character itself

#include<stdio.h>
#include<conio.h>

void main()
{
    char ch;
    printf("Enter a character: ");
    scanf("%c",&ch);

    //  using ASCII value
    if(ch>=48 && ch<=57)
        printf("\nCharacter %c is a digit.",ch);
    
    else if(ch>=65 && ch<=90)
        printf("\nCharacter %c is a uppercase alphabet.",ch);

    else if(ch>=97 && ch<=122)
        printf("\nCharacter %c is a lowercase alphabet.",ch);

    else if((ch>=1 && ch<=47) || (ch>=58 && ch<=64) || (ch>=91 && ch<=96) || (ch>=123 && ch<=256))
        printf("\nCharacter %c is a special symbol.",ch);


    //  using character itself
    if(ch>='0' && ch<='9')  
    //  ' ' are used because ch is compared 
        printf("\nCharacter %c is a digit.",ch);
    
    else if(ch>='A' && ch<='Z')
        printf("\nCharacter %c is a uppercase alphabet.",ch);

    else if(ch>='a' && ch<='z')
        printf("\nCharacter %c is a lowercase alphabet.",ch);

    else
        printf("\nCharacter %c is a special symbol.",ch);

    getch();
} 
