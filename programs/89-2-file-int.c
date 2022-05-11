//  Kashish Ahuja
//  Program for file's built-in functions 
//  2) fopen, fclose, putw, getw    (int)

#include<stdio.h>
#include<conio.h>

void main()
{
    char ch;
    int num;
    FILE *fp;

    // Handling integers
    // putw
    printf("\nEnter data: ");
    fp=fopen("KA.txt","w");
    while((num=getchar())!=EOF)
    {
        putw(num,fp);
    }
    printf("Data is saved in file.");
    fclose(fp); 

    //  getw
    printf("\nData: ");
    fp=fopen("KA.txt","r");
    while((num=getw(fp))!=EOF)
    {
        // printf("%c",ch);
        printf("%d",num);
    }
    fclose(fp);      

    getch();
}