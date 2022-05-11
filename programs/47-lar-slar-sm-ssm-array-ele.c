//  Kashish Ahuja
//  Program to find largest, second largest, smallest and second smallest element of an array

#include<stdio.h>
#include<conio.h>

#define max 15
void main()
{
    int arr[max], i, n, lar, slar, sm, ssm;

    printf("Enter number of elements of array: ");
    scanf("%d",&n);

    printf("Enter elements of array: ");
    for(i=0; i<n; i++)
    {
        scanf("%d",&arr[i]);
    }
    lar=slar=sm=ssm=arr[0];

    //  largest
    for(i=0; i<n; i++)
        if(arr[i]>lar)
            lar=arr[i];

    //  second largest
    for(i=0; i<n; i++)
        if(arr[i]>slar && arr[i]<lar)
            slar=arr[i];

    //  smallest
    for(i=0; i<n; i++)
        if(arr[i]<sm)
            sm=arr[i];

    //  second smallest
    for(i=0; i<n; i++)
        if(arr[i]<slar && arr[i]>lar)
            ssm=arr[i];

    printf("\nThe largest element is %d and second largest element is %d", lar, slar);
    printf("\nThe smallest element is %d and second smallest element is %d", sm, ssm);
    getch();
} 
