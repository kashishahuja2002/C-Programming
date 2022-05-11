//  Kashish Ahuja
//  Program to check whether the number is a palindrome or not

#include<stdio.h>
#include<conio.h>

void main()
{
    int num, org, rev=0, mid;
    printf("Enter a number: ");
    scanf("%d", &num);
    org=num;
    while(num!=0)
    {
        mid=num%10;
        rev= rev*10 + mid;
        num=num/10;
    }
    if(org==rev)
        printf("%d is a palindrome number.",org);
    else    
        printf("%d is a not palindrome number.",org);

    getch();
}