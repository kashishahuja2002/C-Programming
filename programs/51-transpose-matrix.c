//  Kashish Ahuja
//  Program for transpose of a matrix

#include<stdio.h>
#include<conio.h>

void main()
{
    //  declaration
    int arr[5][5], i, j, rows, cols;
    
    printf("Enter number of rows and columns of matrix: ");
    scanf("%d %d",&rows, &cols);

    printf("Enter elements of matrix: ");
    for(i=0; i<rows; i++)
    {
        for(j=0; j<cols; j++)
            scanf("%d",&arr[i][j]);
    }

    printf("\nElements of matrix are: \n");
    for(i=0; i<rows; i++)
    {
        for(j=0; j<cols; j++)
            printf("%d ",arr[i][j]);
        printf("\n");
    }

    //  transpose
    printf("\nElements of transposed matrix are: \n");
    for(i=0; i<cols; i++)
    {
        for(j=0; j<rows; j++)
            printf("%d ",arr[j][i]);
        printf("\n");
    }

    getch();
} 
