//  Kashish Ahuja
//  Program for array (two dimensional)

#include<stdio.h>
#include<conio.h>

void main()
{
    //  declaration
    int arr_a[5][5], i, j, rows, cols;

    //  initialisation at time of declaration
    int arr_b[2][2]={1,2,3,4};
    int arr_c[3][3]={{1,2,3},{4,5,6},{7,8,9}};
    int arr_d[][2]={5,6,7,8,9,10};
    
    printf("Enter number of rows and columns of array: ");
    scanf("%d %d",&rows, &cols);

    //  scanning array elements
    printf("Enter elements of array: ");
    for(i=0; i<rows; i++)
    {
        for(j=0; j<cols; j++)
            scanf("%d",&arr_a[i][j]);
    }

    //  printing array elements
    printf("Elements of array are: \n");
    for(i=0; i<rows; i++)
    {
        for(j=0; j<cols; j++)
            printf("%d ",arr_a[i][j]);
        printf("\n");
    }

    getch();
} 
