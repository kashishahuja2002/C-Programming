//  Kashish Ahuja
//  Program for increment and decrement

#include<stdio.h>
#include<conio.h>

void main()
{
    int a, num;
    printf("Enter a number: ");
    scanf("%d",&a);

    //  pre-increment
    num=++a;
    printf("\n\nPre-incremented number: %d",num);
    printf("\nNumber: %d",a);

    //  post-increment
    num=a++;
    printf("\n\nPost-incremented number: %d",num);
    printf("\nNumber: %d",a);

    //  pre-decrement
    num=--a;
    printf("\n\nPre-decremented number: %d",num);
    printf("\nNumber: %d",a);

    //  post-decrement
    num=a--;
    printf("\n\nPost-decremented number: %d",num);
    printf("\nNumber: %d",a);

    getch();
}