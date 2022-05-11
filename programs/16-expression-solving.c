//  Kashish Ahuja
//  Program for expression solving

#include<stdio.h>
#include<conio.h>
#include<string.h>

void main()
{
    int x, y=0;

    x=10;
    y = x++ + ++x + x++;
    printf("\n\nx=%d\ny=%d",x,y);

    x=7;
    y = x++ + ++x + x++ + ++x;
    printf("\n\nx=%d\ny=%d",x,y);

    x=16;
    y = ++x + x++ + ++x + x++ + ++x;
    printf("\n\nx=%d\ny=%d",x,y);

    x=11;
    y = ++x + x++ + ++x + x++;
    printf("\n\nx=%d\ny=%d",x,y);

    x=13;
    y = ++x - x-- + --x - x++ - x--;
    printf("\n\nx=%d\ny=%d",x,y);

    getch();
}