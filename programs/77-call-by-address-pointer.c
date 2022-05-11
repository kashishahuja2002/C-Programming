//  Kashish Ahuja
//  Program for call by address/pointer using swapping example

#include<stdio.h>
#include<conio.h>

void swap (int *, int *);

int main()
{
    int a, b;
    printf("Enter numbers for swapping: ");
    scanf("%d %d",&a,&b);
    swap(&a,&b);
    printf("\nIn main numbers are: %d and %d", a, b);   // Value is also swaped outside the function 
    return 0;
}

void swap(int *x, int *y)
{
    int temp;
    temp=*x;
    *x=*y;
    *y=temp;
    printf("\nAfter swapping numbers are: %d and %d",*x, *y);
}