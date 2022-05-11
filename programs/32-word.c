//  Kashish Ahuja
//  Program to display word for digit from 0 and 9

#include<stdio.h>
#include<conio.h>

void main()
{
    printf("Enter any digit from 0 to 9: ");
    int num;
    scanf("%d",&num);

    switch(num)
    {
        case 0: printf("Zero");
                break;

        case 1: printf("One");
                break;
        
        case 2: printf("Two");
                break;

        case 3: printf("Three");
                break;

        case 4: printf("Four");
                break;

        case 5: printf("Five");
                break;

        case 6: printf("Six");
                break;

        case 7: printf("Seven");
                break;

        case 8: printf("Eight");
                break;

        case 9: printf("Nine");
                break;

        default: printf("Number should be from 0 to 9");
    }
    getch();
}
