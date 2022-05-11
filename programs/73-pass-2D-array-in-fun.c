//  Kashish Ahuja
//  Program to pass 2D array in function

#include<stdio.h>
#include<conio.h>

void array(int[][20]);
int i,j,r,c;

int main()
{
    int arr[20][20];
    printf("Enter number of rows in array: ");
    scanf("%d",&r);
    printf("Enter number of column in array: ");
    scanf("%d",&c);
    printf("\nEnter elements of matrix: ");
    for(i=0; i<r; i++)
    {
        for(j=0; j<c; j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }
    array(arr);

    return 0;
}

void array(int arr[][20])
{
    for(i=0; i<r; i++)
    {
        for(j=0; j<c; j++)
        {
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
}