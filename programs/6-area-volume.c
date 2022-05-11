//  Kashish Ahuja
//  Program to find out area & volume of cone, sphere, and cylinder

#include<stdio.h>
#include<conio.h>

void main()
{
    float area, volume, pi=3.14;
    float r, l, h;

    printf("\n\nEnter radius, slant height and height of cone: ");
    scanf("%f %f %f", &r, &l, &h);
    area=(pi*r*l)+(pi*r*r);
    volume=(pi*r*r*h)/3;
    printf("Area of cone: %f", area);
    printf("\nVolume of cone: %f", volume);

    printf("\n\nEnter radius of sphere: ");
    scanf("%f", &r);
    area=4*pi*r*r;
    volume=(4*pi*r*r*r)/3;
    printf("Area of sphere: %f", area);
    printf("\nVolume of sphere: %f", volume);

    printf("\n\nEnter radius and height of cylinder: ");
    scanf("%f %f", &r, &h);
    area=2*pi*r*(r+h);
    volume=pi*r*r*h;
    printf("Area of cylinder: %f", area);
    printf("\nVolume of cylinder: %f", volume);

    getch();
}