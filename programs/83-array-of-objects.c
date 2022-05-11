//  Kashish Ahuja
//  Program for array of objects using structure of book

#include<stdio.h>
#include<conio.h>
#include<string.h>
#define MAX 3

struct Book
{
    char name[20];
    float price;
    int pages;
};

void main()
{
    struct Book b[MAX];
    int i;
    for(i=0; i<MAX; i++)
    {
        printf("\n\nEnter details of book %d... \n",i+1);
        printf("\nEnter book's name: ");
        fflush(stdin);
        gets(b[i].name);
        printf("Enter book's price: ");
        scanf("%f",&b[i].price);
        printf("Enter no. of pages in book: ");
        scanf("%d",&b[i].pages);
    }
    printf("\nDetails of books...");
    printf("\nName\t\t\tPrice\t\t\t\tNo. of pages");
    printf("\n--------------------------------------------------------------------");           
    for(i=0; i<MAX; i++)
    {    
        printf("\n%s\t\t\t%f\t\t\t%d", b[i].name, b[i].price, b[i].pages);
    }
}
