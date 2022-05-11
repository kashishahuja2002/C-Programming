//  Kashish Ahuja
//  Program to check whether the number is even or odd using if else

#include<stdio.h>
#include<conio.h>

void main()
{
    int num;
    printf("Enter a number: ");
    scanf("%d",&num);

    //  using modulus
    if(num%2==0)
        printf("\n%d is even",num);
    else
        printf("\n%d is odd",num);

    //  without using modulus
    if(num/2*2==num)
        printf("\n%d is even",num);
    else
        printf("\n%d is odd",num);
    //  num/2 in case of odd number will give an even integer which when multiplied by 2 will also result in an even integer not equals to num 

    getch();
}