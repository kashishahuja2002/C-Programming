//  Kashish Ahuja
//  Program to copy one file's data into another

#include<stdio.h>
#include<conio.h>

void main()
{
    char ch;
    FILE *fp, *new;

    printf("Enter data: ");
    fp=fopen("Kashish.txt","w");
    while((ch=getchar())!=EOF)
    {
        putc(ch,fp);
    }
    printf("Data is saved in file.");
    fclose(fp);

    fp=fopen("Kashish.txt","r");
    new=fopen("new.txt","w");
    while((ch=getc(fp))!=EOF)
    {
        putc(ch,new);
    }
    fclose(new);
    fclose(fp);

    printf("\n\nData in new file.\n");
    new=fopen("new.txt","r");
    while((ch=getc(new))!=EOF)
    {
        printf("%c",ch);
    }
    fclose(new);

    getch();
}