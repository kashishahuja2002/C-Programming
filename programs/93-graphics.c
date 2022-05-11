//    Kashish Ahuja    
//    Program for built-in functions for graphics in C

#include<stdio.h>
#include<conio.h>

void main()
{
	clrscr();
	int num;
	textbackground(CYAN);	// colour of background
	textcolor(15);		// colour of text
	cprintf(" Hello World ");	// printing coloured text
	gotoxy(5,10);	        // changing cordinates
	cprintf(" 10, 10 \n");
	cscanf("%d",&num);	// scaning in coloured form
	getchar();
}