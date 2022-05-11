//  Kashish Ahuja
//  Program for file's built-in functions 
//  1) fopen, fclose, putc, getc    (char)

#include<stdio.h>
#include<conio.h>

void main()
{
    char ch;
    int num;
    FILE *fp;

    //  Handling characters
    //  putc
    printf("Enter data: ");
    fp=fopen("Ahuja.txt","a");
    while((ch=getchar())!=EOF)
    {
        putc(ch,fp);
    }
    printf("Data is saved in file.");
    fclose(fp);

    //  getc
    printf("\nData: ");
    fp=fopen("Ahuja.txt","r");
    while((ch=getc(fp))!=EOF)
    {
        printf("%c",ch);
    }
    fclose(fp);

    getch();
}