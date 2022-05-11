//  Kashish Ahuja
//  Program to pass 1D array in function using example of finding greatest number in array

#include<stdio.h>
#include<conio.h>

void greatest(int[], int z);
int i;

int main()
{
    int arr[20], n;
    printf("Enter number of elements in array: ");
    scanf("%d",&n);
    printf("\nEnter elements of array: ");
    for(i=0; i<n; i++)
    {
        scanf("%d",&arr[i]);
    }
    greatest(arr,n);

    return 0;
}

void greatest(int a[], int j)
{
    int greatest=0;
    for(i=0; i<j; i++)
    {
        if(a[i]>greatest)
            greatest=a[i];
    }
    printf("\nGreatest element in array is %d",greatest);
}