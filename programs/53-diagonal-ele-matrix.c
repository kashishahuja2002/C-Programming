//  Kashish Ahuja
//  Program to print only diagonal elements of a matrix

#include<stdio.h>
#include<conio.h>

void main()
{
    int arr[5][5], i, j, rows, cols;
    
    printf("Enter number of rows and columns of matrix: ");
    scanf("%d %d",&rows, &cols);

    printf("Enter elements of matrix: ");
    for(i=0; i<rows; i++)
    {
        for(j=0; j<cols; j++)
            scanf("%d",&arr[i][j]);
    }

    printf("\nDiagonal elements of matrix are: \n");
    for(i=0; i<rows; i++)
    {
        for(j=0; j<cols; j++)
            if((i==j)||(i+j==(rows-1)))
                printf("%d ",arr[i][j]);
            else
                printf("  ");
        printf("\n");
    }

    getch();
} 
