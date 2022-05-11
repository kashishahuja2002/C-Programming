//  Kashish Ahuja
//  Program for sum of two variables by all three type of functions

#include<stdio.h>
#include<conio.h>
#include<kashish.h>

// void sum1();
// void sum2(int, int);
// int sum3(int, int);

void main()
{
    sum1();
    
    int a, b;

    printf("\n\n(II type) Enter values of a and b: ");
    scanf("%d %d",&a, &b); 
    sum2(a,b);

    printf("\n\n(III type) Enter values of a and b: ");
    scanf("%d %d",&a, &b); 
    int sum;
    sum=sum3(a,b); 
    printf("Sum is %d",sum); 

    getch();
}

// void sum1()
// {
//     int a, b, sum;
//     printf("\n\n(I type) Enter values of a and b: ");
//     scanf("%d %d",&a, &b);
//     sum=a+b;
//     printf("Sum is %d",sum);
// }

// void sum2(int x, int y)
// {
//     int sum;
//     sum=x+y;
//     printf("Sum is %d",sum);
// }

// int sum3(int x, int y)
// {
//     int sum;
//     sum=x+y;
//     return sum; 
// }



