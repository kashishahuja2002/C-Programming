//  Kashish Ahuja
//  Program to count number of even and odd elements in an array

#include<stdio.h>
#include<conio.h>

#define max 15
void main()
{
    int arr[max], i, n, even=0, odd=0;

    printf("Enter number of elements of array: ");
    scanf("%d",&n);

    //  scanning array elements
    printf("Enter elements of array: ");
    for(i=0; i<n; i++)
    {
        scanf("%d",&arr[i]);
        if(arr[i]%2==0)
            even++;
        else
            odd++;
    }
    printf("The number of even elements are %d and odd elements are %d", even, odd);
    getch();
} 
