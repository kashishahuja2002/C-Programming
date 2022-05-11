//  Kashish Ahuja
//  Program for structure in file [fwrite() and fread()]

#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

struct Student
{
    int rollno;
    char name[20];
};

void main()
{
    int num;
    struct Student s;
    FILE *fp;
    do
    {
        printf("\n\n1. Enter record\n2. Display all records\n3. Search a record\n4. Exit");
        printf("\nEnter your choice: ");
        scanf("%d",&num);
        switch(num)
        {
            case 1: fp=fopen("Ahuja","a");
                    printf("\nEnter roll no.: ");
                    scanf("%d",&s.rollno);
                    fflush(stdin);
                    printf("Enter name: ");
                    gets(s.name);
                    fwrite(&s, sizeof(s), 1, fp);
                    fclose(fp);
                    break;

            case 2: fp=fopen("Ahuja","r");
                    if(fp==NULL)
                    {
                        printf("\nFile does not exist.");
                        exit(0);
                    }
                    else
                    {
                        while(fread(&s, sizeof(s), 1, fp))
                        {
                            printf("\n\nRoll no.: %d",s.rollno);
                            printf("\nName: %s",s.name);
                        }
                    }
                    fclose(fp);
                    break;

            case 3: printf("\nEnter roll no. to search record: ");
                    int search;
                    scanf("%d",&search);
                    fp=fopen("Ahuja","r");
                    while(fread(&s, sizeof(s), 1, fp))
                    {
                        if(search==s.rollno)
                        {
                            printf("\nRoll no.: %d",s.rollno);
                            printf("\nName: %s",s.name);
                        }
                    }
                    fclose(fp);
                    break;

            case 4: exit(0);
                    break;

            default:    printf("\nEnter valid option"); 
                        exit(0);
        }
    } while (num!=4);
    
    getch();
}