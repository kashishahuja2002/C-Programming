//  Kashish Ahuja
//  Program to find area of circle

#include<stdio.h>
#include<conio.h>

void main()
{
    int radius;
    float area;
    printf("Enter radius of circle: ");
    scanf("%d", &radius);
    area=(3.14)*radius*radius;
    printf("Area of circle: %f", area);
    getch();
}