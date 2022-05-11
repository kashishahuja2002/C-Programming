//  Kashish Ahuja
//  Program to check whether the number is an armstrong number

#include<stdio.h>
#include<conio.h>
#include<math.h>

void main()
{
    int num, org, sum=0, mid=0, count=0, n;
    printf("Enter a number: ");
    scanf("%d", &num);
    n=org=num;
    while(num!=0)
    {
        count++;
        num=num/10;
    }
    while(n!=0)
    {
        mid=n%10;
        mid=pow(mid,count);
        sum=sum+mid;
        n=n/10;
    }
    if(org==sum)
        printf("\n%d is an armstrong number.",org);
    else    
        printf("\n%d is a not an armstrong number.",org);
    getch();
}