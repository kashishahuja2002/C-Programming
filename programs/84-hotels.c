//  Kashish Ahuja
//  Program to display record of hotels

#include<stdio.h>
#include<conio.h>
#include<string.h>
#define MAX 3

struct Hotel
{
    char name[20], address[50], city[10], email[30], website[30];
    int employees, rooms;
    long long int regno, contact;
    float rating;
};

void main()
{
    struct Hotel h[MAX];
    int i;
    for(i=0; i<MAX; i++)
    {
        printf("\n\nEnter details of hotel %d... ",i+1);
        printf("\nEnter registration number: ");
        scanf("%lld",&h[i].regno);
        fflush(stdin);
        printf("Enter name: ");
        gets(h[i].name);
        printf("Enter contact: ");
        scanf("%lld",&h[i].contact);
        fflush(stdin);
        printf("Enter address: ");
        gets(h[i].address);
        printf("Enter city: ");
        gets(h[i].city);
        printf("Enter email: ");
        gets(h[i].email);
        printf("Enter website: ");
        gets(h[i].website);
        printf("Enter number of employees: ");
        scanf("%d",&h[i].employees);
        printf("Enter number of rooms: ");
        scanf("%d",&h[i].rooms);
        printf("Enter rating: ");
        scanf("%f",&h[i].rating);
    }
    // printf("\nDetails of hotels...");
    // printf("\nReg No.\tName\tContact\tAddress\tCity\tEmail\tWebsite\tNo. of employees\tNo. of rooms\tRating");
    // printf("\n--------------------------------------------------------------------");           
    // for(i=0; i<MAX; i++)
    // {    
    //     printf("\n%d\t%s\t%d\t%s\t%s\t%s\t%s\t%d\t%d\t%f", h[i].regno, h[i].name, h[i].contact, h[i].address, h[i].city, h[i].email, h[i].website, h[i].employees, h[i].rooms, h[i].rating);
    // }
    for(i=0; i<MAX; i++)
    {
        printf("\n\nDetails of hotel %d... ",i+1);
        printf("\nRegistration number: %lld",h[i].regno);
        printf("\nName: %s",h[i].name);
        printf("\nContact: %lld",h[i].contact);
        printf("\nAddress: %s",h[i].address);
        printf("\nCity: %s",h[i].city);
        printf("\nEmail: %s",h[i].email);
        printf("\nWebsite: %s",h[i].website);
        printf("\nNumber of employees: %d",h[i].employees);
        printf("\nNumber of rooms: %d",h[i].rooms);
        printf("\nRating: %f",h[i].rating);
    }
}
