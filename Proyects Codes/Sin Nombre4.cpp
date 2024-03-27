#include <string.h>
#include <stdio.h>
#include <windows.h>
#include <stdlib.h>
#include <stdio.h>
#include <conio.h>
#include <cstdlib>
void gotoxy(int x,int y) {
	HANDLE hcon;
	hcon = GetStdHandle(STD_OUTPUT_HANDLE);
	COORD dwPos;
	dwPos.X = x;    
	dwPos.Y = y;
	SetConsoleCursorPosition(hcon,dwPos);
	}

main()
{
	
	
	for(int x=7; x<8; x++){
	gotoxy (x,6);
	printf ("%C",201);
	gotoxy (x,30);
	printf ("%C",200);
	}
    for(int x=90; x<91; x++){
	 gotoxy (x,30);
	 printf ("%C",188);
	 gotoxy (x,6);
	 printf ("%C",187);
	 }
	
	for(int x=8  ; x<=89; x++)
	{
		gotoxy (x,6);
		printf ("%C",205);
	    gotoxy (x,30);
		printf ("%C",205);
	}
		for(int x=8  ; x<=90; x++)
	{   gotoxy (x,11);
		printf ("%C",205);
		gotoxy (x,15);
		printf ("%C",205);
		gotoxy (x,18);
		printf ("%C",205);
		gotoxy (x,22);
		printf ("%C",205);
		gotoxy (x,26);
		printf ("%C",205);
	     
	}
 
	for(int y=7; y<=29; y++)
	{
		gotoxy (7,y);
		printf ("%C",186);
		gotoxy (17,y);
		printf ("%C",186);
	    gotoxy (35,y);
		printf ("%C",186);
		gotoxy (45,y);
		printf ("%C",186);
		gotoxy (60,y);
		printf ("%C",186);
		gotoxy (75,y);
		printf ("%C",186);
		gotoxy (90,y);
		printf ("%C",186);
	}
	getch();
}

