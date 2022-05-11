//  Kashish Ahuja
//  Program to check if a number is prime

#include<stdio.h>
#include<conio.h>

void main()
{
    int num, i=2, bool=0;
    printf("Enter a number: ");
    scanf("%d",&num);
    while(i<=(num/2))
    {
        if(num%i==0)
            bool=1;
        i++;
    }
    if(bool==0)
        printf("%d is a prime number",num);
    else
        printf("%d is not a prime number",num);
    getch();
} 
