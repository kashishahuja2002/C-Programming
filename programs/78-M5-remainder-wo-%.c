//  Kashish Ahuja
//  Miscellaneous question 5
//  Program to find remainder without using modulus (%)

#include<stdio.h>
#include<conio.h>

void main()
{
    int num, rem, divisor, quotient;
    printf("Enter a number: ");
    scanf("%d",&num);
    printf("Enter divisior: ");
    scanf("%d",&divisor);
    quotient=num/divisor;
    rem=num-(divisor*quotient);
    printf("\n%d",rem);
    getch();
}