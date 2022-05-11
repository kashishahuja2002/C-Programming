//  Kashish Ahuja
//  Program for swapping

#include<stdio.h>
#include<conio.h>

void main()
{
    int a, b;
    printf("Enter two numbers for swapping: ");
    scanf("%d %d",&a, &b);

    //  without using 3rd variable (+-)
    a=a+b;
    b=a-b;
    a=a-b;
    printf("\nThe numbers after swapping are: %d %d", a, b);

    //  without using 3rd variable (*/)
    a=a*b;
    b=a/b;
    a=a/b;
    printf("\nThe numbers after swapping are: %d %d", a, b);

    //  with using 3rd variable
    int temp;
    temp=a;
    a=b;
    b=temp;
    printf("\nThe numbers after swapping are: %d %d", a, b);

    getch();
}