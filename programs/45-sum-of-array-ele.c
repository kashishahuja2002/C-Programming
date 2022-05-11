//  Kashish Ahuja
//  Program for sum of array elements

#include<stdio.h>
#include<conio.h>

#define max 5
void main()
{
    int arr[max], sum=0, i;

    //  scanning array elements
    printf("Enter elements of array a: ");
    for(i=0; i<max; i++)
    {
        scanf("%d",&arr[i]);
        sum=sum+arr[i];
    }
    printf("The sum of all array elements is %d",sum);
    getch();
} 
