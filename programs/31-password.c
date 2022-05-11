//  Kashish Ahuja
//  Program for password

#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

void main()
{
    //  password = KA15
    char a,b,c,d;
    char enter;
    int count=3;
    try:
    printf("\n\nEnter password: ");
    a=getch();
    printf("*");
    b=getch();
    printf("*");
    c=getch();
    printf("*");
    d=getch();
    printf("*");
    while(count!=0)
    {
        if(a=='K' && b=='A' && c=='1' && d=='5')
        {
            enter=getch();
            if(enter==13)
            {
                printf("\nCorrect password");
                break;
            }
            else
                exit(0);
        }
        else    
        {
            enter=getch();
            if(enter==13)
            {
                printf("\nWrong password");
                count--;
                if(count!=0)
                {
                    printf("\nTry again");
                    goto try;
                }
                else
                    printf("\n\nForgot password?");
            }
        }
    }

    getch();
} 
