//  Kashish Ahuja
//  Program for array (one dimensional)

#include<stdio.h>
#include<conio.h>

void main()
{
    //  declaration
    int arr_a[15], i, n;

    //  initialisation at time of declaration
    int arr_b[5]={1,2,3,4,5};
    int arr_c[]={5,4,3,2,1};

    printf("Enter number of elements of array: ");
    scanf("%d",&n);

    //  scanning array elements
    printf("Enter elements of array: ");
    for(i=0; i<n; i++)
        scanf("%d",&arr_a[i]); 

    //  printing array elements
    for(i=0; i<n; i++)
        printf("%d ",arr_a[i]);

    getch();
} 
