//  Kashish Ahuja
//  Program for 1D array using pointer

#include<stdio.h>
#include<conio.h>

void main()
{
    int arr[15], i, n, *ptr;

    printf("Enter number of elements of array: ");
    scanf("%d",&n);

    printf("Enter elements of array: ");
    for(i=0; i<n; i++)
        scanf("%d",&arr[i]); 

    ptr=&arr[0];
    for(i=0; i<n; i++)
    {
        printf("\nAddress of %d is %u.",*ptr,ptr);
        ptr++;
    }
}