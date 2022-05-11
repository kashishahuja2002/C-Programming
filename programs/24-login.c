//  Kashish Ahuja
//  Program for login

#include<stdio.h>
#include<conio.h>

void main()
{
    char username, user;
    int password, pass;
    username='K';
    password=1505;
    printf("\nEnter username: ");
    scanf("%c",&user);
    if(user==username)
    {
        printf("\nEnter password: ");
        scanf("%d",&pass);
        if(pass==password)
            printf("\nLogin successful");
        else
            printf("\nLogin not successful.\nForgot password?");
    }
    else
        printf("\nLogin not successful.\nForgot username?");
    getch();
} 