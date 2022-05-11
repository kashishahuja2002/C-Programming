//  Kashish Ahuja
//  Program to pass 2D character array in function 

#include<stdio.h>
#include<conio.h>
#include<string.h>

void string(char[][30]);
int i,n;

int main()
{
    char str[30][30];
    printf("Enter number of rows: ");
    scanf("%d",&n);
    fflush(stdin);
    for(i=0; i<n; i++)
    {
        gets(str[i]);
    }
    string(str);

    return 0;
}

void string(char str[][30])
{
    printf("\nThe strings are: ");
    for(i=0; i<n; i++)
    {
        puts(str[i]);
    }
}