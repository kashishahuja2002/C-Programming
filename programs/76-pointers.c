//  Kashish Ahuja
//  Program for pointer

#include<stdio.h>
#include<conio.h>

void main()
{
    int num, *ptr;
    printf("Enter a num: ");
    scanf("%d",&num);
    ptr=&num;
    printf("Address of num is %d. \nValue of num is %d.",ptr,*ptr);
    getch();
}