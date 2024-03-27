#include <stdio.h>
#include <conio.h>
#include<windows.h>
#include<stdlib.h>
#include<time.h>

#define IZQUIERDA 75
#define DERECHA 77
#define ABAJO 80
#define ARRIBA 72
#define SPACE 32

void gotoxy(int x, int y){
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
   info.dwSize = 1;
   info.bVisible = FALSE;
   SetConsoleCursorInfo(consoleHandle, &info);
}


        //nave
        int q= 35, h = 25;
		char n1 [] = {' ',' ','^',' ',' ',0};
        char n2 [] = {' ','^','-','^',' ',0};
        char n3 [] = {'^','-','^','-','^',0};
		
		//Explosion de la nave
		void explosion()
		{
			char explosion1 [] = {' ',' ',' ','*',' ',0};
			char explosion2 [] = {' ',' ',' ',' ','*',0};
			char explosion3 [] = {' ',' ',' ','*',' ',0};
			}	
        
        //borrar naves
        char borrar [] = {' ',' ',' ',' ',' ', 0};
        
		int x=9, y=5, y1=5, i;
		
	    int b= 28, k= 8, bx=1, kx=1;
		int a= 35, z= 15, ax=1, zx=1;
		
		int d= 40, e= 20, dx=1, ex=1;
		int f= 45, g= 25, fx=1, gx=1;
		
		int t= 32, j= 12, tx=1, jx=1;
		int p= 42, o= 23, px=1, ox=1;
 
		


void pintarcuadro ()
{
			for (int i=1; i<52; i++)
		{

			gotoxy(x+i,y1); printf("%C",220);
			gotoxy(x+i,30); printf("%C",220);

		}
		
		
		
			for (int i=1; i<26; i++)
		{
	
			gotoxy(10,y+i); printf("%C",178);
			gotoxy(60,y+i); printf("%C",178);

		}
		
	
}

void asteroide()
{
		gotoxy(a,z); printf(" ");
		a=a+ax;
		z= z+ zx;
		
		 gotoxy(a,z); printf("%c", 153);
		Sleep(15);	
		if(a == 11 || a== 59){
			ax= -1 * ax;
		}
		if(z == 6 || z== 29){
			zx= -1 * zx;
		}
		
	
}


main()
	{
hidecursor();
		
		//Declaracion de variables.
		system("color 05");

//Imprimiendo nave
gotoxy (q,h); puts(n1);
gotoxy (q,h+1); puts(n2);
gotoxy (q,h+2); puts(n3);



			//Haciendo cuadro.
			
		for (int i=1; i<20; i++)
		{

			gotoxy(8+i,1); printf("%C",178);
			gotoxy(24+i,1); printf("%C",177);
		    gotoxy(42+i,1); printf("%C",176);

		}
		
				for (int i=1; i<54; i++)
		{
		    gotoxy(8+i,2); printf("%C",254);
		    gotoxy(8+i,4); printf("_");
		}
		
	   gotoxy(24,3);
        printf(" REBOTADOR DE PELOTAS");
        
		
		//Haciendo cuadro.

        pintarcuadro();
    
//bola
		while(1){



}
			


//bola
		while(1){
		gotoxy(a,z); printf(" ");
		a=a+ax;
		z= z+ zx;
		
		 gotoxy(a,z); printf("%c", 153);
		Sleep(15);	
		if(a == 11 || a== 59){
			ax= -1 * ax;
		}
		if(z == 6 || z== 29){
			zx= -1 * zx;
		}
		
//bola
		gotoxy(b,k); printf(" ");
		b=b+bx;
		k= k+ kx;
		
		 gotoxy(b,k); printf("%c", 229);
		Sleep(20);	
		if(b == 11 || b== 59){
			bx= -1 * bx;
		}
		if(k == 6 || k== 29){
			kx= -1 * kx;
		}
		
//bola
		gotoxy(d,e); printf(" ");
		d=d+dx;
		e= e+ ex;
		
		 gotoxy(d,e); printf("%c", 226 );
		Sleep(20);	
		if(d == 11 || d== 59){
			dx= -1 * dx;
		}
		if(e == 6 || e== 29){
			ex= -1 * ex;
		}

		//bola		
		gotoxy(f,g); printf(" ");
		f=f+fx;
		g= g+ gx;
		
		 gotoxy(f,g); printf("%c", 184);
		Sleep(20);	
		if(f == 11 || f== 59){
			fx= -1 * fx;
		}
		if(g == 6 || g== 29){
			gx= -1 * gx;
		}
		
		//bola		
		gotoxy(t,j); printf(" ");
		t=t+tx;
		j= j+ jx;
		
		 gotoxy(t,j); printf("O");
		Sleep(20);	
		if(t == 11 || t== 59){
			tx= -1 * tx;
		}
		if(j == 6 || j== 29){
			jx= -1 * jx;
		}
		
		//bola	
			gotoxy(p,o); printf(" ");
		p=p+px;
		o= o+ ox;
		
		 gotoxy(p,o); printf("%c", 169 );
		Sleep(20);	
		if(p == 11 || p== 59){
			px= -1 * px;
		}
		if(o == 6 || o== 29){
			ox= -1 * ox;
		}	

		
		}
		//Mover nave
if (kbhit ()) {

unsigned char key = getch();

switch(key)
{
case IZQUIERDA:
	if (q>12)
	{
		
		gotoxy (q,h);puts(borrar);
		gotoxy (q,h+1);puts(borrar);
		gotoxy (q,h+2);puts(borrar);
		
		q-=2;
		gotoxy (q,h);puts(n1);
		gotoxy (q,h+1);puts(n2);
		gotoxy (q,h+2);puts(n3);
	}
	break;
	

{
	
	
case DERECHA:
	if (q<54)
	{
		gotoxy (q,h);puts(borrar);
		gotoxy (q,h+1);puts(borrar);
		gotoxy (q,h+2);puts(borrar);	
		
		q+=2;
		gotoxy (q,h);puts(n1);
		gotoxy (q,h+1);puts(n2);
		gotoxy (q,h+2);puts(n3);
	}
	break;
	
case ARRIBA:
	if (h>7)
	{
		gotoxy (q,h);puts(borrar);
		gotoxy (q,h+1);puts(borrar);
		gotoxy (q,h+2);puts(borrar);	
		
		h-=2;
		gotoxy (q,h);puts(n1);
		gotoxy (q,h+1);puts(n2);
		gotoxy (q,h+2);puts(n3);
	}
	break;
	
case ABAJO:
	if (h<26)
	{
		gotoxy (q,h);puts(borrar);
		gotoxy (q,h+1);puts(borrar);
		gotoxy (q,h+2);puts(borrar);	
		
		h+=2;
		gotoxy (q,h);puts(n1);
		gotoxy (q,h+1);puts(n2);
		gotoxy (q,h+2);puts(n3);
	}
	break;
	
		
}//cierre swt

}//cierre kbhij
asteroide();
		
}
}

