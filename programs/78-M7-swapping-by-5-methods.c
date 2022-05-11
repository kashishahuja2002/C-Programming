//  Kashish Ahuja
//  Miscellaneous question 7
//  Program for swapping by five methods

#include<stdio.h>
#include<conio.h>

void main()
{
    int a, b, *p, *q;
    printf("Enter two numbers for swapping: ");
    scanf("%d %d",&a, &b);
    p=&a;
    q=&b;

    //  with using 3rd variable
    int temp;
    temp=a;
    a=b;
    b=temp;
    printf("\nThe numbers after swapping are: %d %d", a, b);

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

    //  using pointers
    p=&b;
    q=&a;
    printf("\nThe numbers after swapping are: %d %d", *p, *q);

    //  bit-wise operator

    getch();
}