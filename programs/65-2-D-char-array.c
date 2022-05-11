//  Kashish Ahuja
//  Program for 2D character array

#include<stdio.h>
#include<conio.h>

void main()
{
    char str[10][10];
    int i, n;
    int j;
    printf("Enter number of rows: ");
    scanf("%d",&n);
    fflush(stdin);
    printf("Enter strings: ");
    for(j=0; j<n; j++)
    {
        gets(str[j]);
    }
    printf("The strjngs are: ");
    for(j=0; j<n; j++)
    {
        puts(str[j]);
    }
    
    getch();
} 
