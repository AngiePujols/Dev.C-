#include<stdio.h>
#include<conio.h>
#include<windows.h>
#include<time.h>
#include <stdio.h>
#include <conio.h>
#include <cstdlib>
void gotoxy(int x,int y) {
	
	HANDLE hcon;
	hcon = GetStdHandle(STD_OUTPUT_HANDLE);
	COORD dwPos;
	dwPos.X = x;    
	dwPos.Y = y;
	SetConsoleCursorPosition(hcon,dwPos);}

void hidecursor()
{
   HANDLE consoleHandle = GetStdHandle(STD_OUTPUT_HANDLE);
   CONSOLE_CURSOR_INFO info;
   info.dwSize = 100;
   info.bVisible = false;
   SetConsoleCursorInfo(consoleHandle, &info);
}
int main(){ 
	hidecursor();
	int x=10, y=25,y1=1,x1=11,x2 = 89,b=38,k=6,bx=1,kx=1,b1=38,k1=6,bx1=1,kx1=1,b2=38,k2=6,bx2=1,kx2=1,b3=38,k3=6,bx3=1,kx3=1,b4=38,k4=6,bx4=1,kx4=1,b5=38,k5=6,bx5=1,kx5=1;
	for(int i=1; i<80; i++)
	{
		gotoxy(x+i,y1);printf("%c",177); 
		gotoxy(x+i,y);printf("%c",177); 
	
	}
		for(int i=1; i<25; i++)
	{
		gotoxy(x1,y1+i);printf("%c",177); 
		gotoxy(x2,y1+i);printf("%c",177); 
	
	}
	while(1)
	{
		gotoxy(b,k);printf(" ");
		b=b + bx;
		k=k + kx;
		gotoxy(b,k);printf("%c",79);
		Sleep(100);
		if(b == 12 || b == 88)
		{
			bx= -1 * bx;
		}
		if(k == 2 || k == 24)
		{
			kx=-1*kx;
		}
		gotoxy(b1,k1);printf(" ");
		b1=b1 + bx1;
		k1=k1 + kx1;
		gotoxy(b1,k1);printf("%c",101);
		Sleep(90);
		if(b1 == 20 || b1 == 45)
		{
			bx1= -1 * bx1;
		}
		if(k1 == 2 || k1 == 24)
		{
			kx1=-1*kx1;
		}
		gotoxy(b3,k3);printf(" ");
		b3=b3 + bx3;
		k3=k3 + kx3;
		gotoxy(b3,k3);printf("%c",42);
		Sleep(85);
		if(b3 == 16 || b3 == 40)
		{
			bx3= -1 * bx3;
		}
		if(k3 == 2 || k3 == 24)
		{
			kx3=-1*kx3;
		}
		gotoxy(b4,k4);printf(" ");
		b4=b4 + bx4;
		k4=k4 + kx4;
		gotoxy(b4,k4);printf("%c",64);
		Sleep(94);
		if(b4 == 16 || b4 == 79)
		{
			bx4= -1 * bx4;
		}
		if(k4 == 2 || k4 == 24)
		{
			kx4=-1*kx4;
		}
		gotoxy(b2,k2);printf(" ");
		b2=b2 + bx2;
		k2=k2 + kx2;
		gotoxy(b2,k2);printf("%c",81);
		Sleep(97);
		if(b2 == 15 || b2 == 50)
		{
			bx2= -1 * bx2;
		}
		if(k2 == 2 || k2 == 24)
		{
			kx2=-1*kx2;
		}
		gotoxy(b5,k5);printf(" ");
		b5=b5 + bx5;
		k5=k5 + kx5;
		gotoxy(b5,k5);printf("%c",97);
		Sleep(93);
		if(b5 == 30 || b5 == 84)
		{
			bx5= -1 * bx5;
		}
		if(k5 == 2 || k5 == 24)
		{
			kx5=-1*kx5;
		}
	}
	




	getch();
}
