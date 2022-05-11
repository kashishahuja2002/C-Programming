//  Kashish Ahuja
//  Program for sorting 2D char array

#include<stdio.h>
#include<conio.h>
#include<string.h>

int main()
{
    char str[5][20];
    for(int i=0; i<5; i++)
        gets(str[i]);
    
    for(int i=0; i<5; i++)
    {
        for(int j=0; j<5; j++)
        {
            if(strcmp(str[j],str[j+1])>0)
            {
                char temp[20];
                strcpy(temp,str[j]);
                strcpy(str[j],str[j+1]);
                strcpy(str[j+1],temp);
            }
        }
    }

    for(int i=0; i<5; i++)
        puts(str[i]);
    
    return 0;
}