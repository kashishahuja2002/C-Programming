//  Kashish Ahuja
//  Program for fscanf() and fprintf()

#include<stdio.h>
#include<conio.h>
#include<string.h>

void main()
{
    int num;
    char str[20];
    FILE *fp;

    //  Handling mixed information
    //  fprintf()
    printf("Enter data: ");
    scanf("%d",&num);
    fflush(stdin);
    gets(str);
    fp=fopen("Kash.txt","a");
    fprintf(fp,"%d %s",num,str);
    fclose(fp);

    //  fscanf()
    printf("\n\nFile data...");
    fp=fopen("Kash.txt","r");
    fscanf(fp,"%d %s",&num,&str);
    printf("\n%d\n%s",num,str);
    fclose(fp);

    getch();
}