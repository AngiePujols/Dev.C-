#include <stdio.h>
#include <conio.h>
#include<windows.h>
#include<stdlib.h>
#include<time.h>

void gotoxy(int x, int y){
	HANDLE hcon;
	hcon = GetStdHandle(STD_OUTPUT_HANDLE);
	COORD dwPos;
	dwPos.X = x;
	dwPos.Y = y;
	SetConsoleCursorPosition(hcon,dwPos);}
	
	
	
		int x=7, y=5,x1=179, i=1;
		
		
void pintarcuadro ()
{
	

	
	//Columnas
	
		gotoxy(x,5); printf("%C",201);
		
		
		for (int i=1; i<20; i++)
		{
			gotoxy(x,y+i); printf("%C",186);
			gotoxy(x1,y+i); printf("%C",186);

		}
		
	//Esquinas
		gotoxy(x,25); printf("%C",200);
		gotoxy(x1,y); printf("%C",187);
		gotoxy(x1,25); printf("%C",188);
		
		
	//Filas
			for (int i=1; i<172; i++)
		{
			gotoxy(x+i,25); printf("%C",205);

		}
		
			for (int i=1; i<172; i++)
		{
			gotoxy(x+i,9); printf("%C",205);

		}
		
		
			for (int i=1; i<172; i++)
		{

			gotoxy(x+i,5); printf("%C",205);
		}
	
	
					
}




	
void tabla_nomina ()
{

		
 gotoxy(10,7);
 printf("Fecha de inicio      Fecha     ID N%Cmina  ID Empleado    Nombre completo del empleado   Salario bruto     Seguro     AFP      Descuentos   Horas extras    Salario neto",162);
  
 gotoxy(10,11);
 printf("  25/11/2020      30/11/2020      100           1           Alexander Brito Soto          58000.00$      300.00$   200.00 $    500.00$       588.00 $       58088.00 $ ");

 gotoxy(10,14);
 printf("  25/11/2020      30/11/2020      101           2           Said Cabral Pru'homme         60000.00$      400.00$   300.00 $    700.00$         0.00 $       59300.00 $");

 gotoxy(10,17);
 printf("  25/11/2020      30/11/2020      102           3             Jeremy Caraballo            70000.00$      500.00$   400.00 $    900.00$       100.00 $       69200.00 $");

 gotoxy(10,20);
 printf("  25/11/2020      30/11/2020      103           4             Claudia Carrión             15000.00$      100.00$    50.00 $    150.00$         0.00 $       14750.00 $ ");
	
 gotoxy(10,23);
 printf("  25/11/2020      30/11/2020      104           5              Liz De la Cruz             15000.00$      100.00$    50.00 $    150.00$         0.00 $       14750.00 $ ");

}








main(){
		//Declaracion de variables.
		system("color 05");
pintarcuadro ();
tabla_nomina ();


getch();
	
	
}
