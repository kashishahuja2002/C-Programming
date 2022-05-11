//  Kashish Ahuja
//  Program for addition of arrays

#include<stdio.h>
#include<conio.h>

#define max 5
void main()
{
    int arr_a[max], arr_b[max], arr_c[max], i;

    //  scanning array elements
    printf("Enter elements of array a: ");
    for(i=0; i<max; i++)
        scanf("%d",&arr_a[i]);

    printf("Enter elements of array b: ");
    for(i=0; i<max; i++)
        scanf("%d",&arr_b[i]); 

    //  sum and printing array elements
    printf("Eelements of array after addition are: ");
    for(i=0; i<max; i++)
    {
        arr_c[i]=arr_a[i]+arr_b[i];   
        printf("%d ",arr_c[i]);
    }

    getch();
} 
