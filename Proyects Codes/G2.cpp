#include<stdio.h>
#include<windows.h>
#include<conio.h>

void gotoxy(int x,int y) {
	
	HANDLE hcon;
	hcon = GetStdHandle(STD_OUTPUT_HANDLE);
	COORD dwPos;
	dwPos.X = x;    
	dwPos.Y = y;
	SetConsoleCursorPosition(hcon,dwPos);}

int main()
{
	char Nombre[50],Peso[50],Proveedor[50],Categoria[50],N2[50],Pe2[50],Pr2[50],C2[50],N3[50],Pe3[50],Pr3[50],C3[50]
	,N4[50],Pe4[50],Pr4[50],C4[50],N5[50],Pe5[50],Pr5[50],C5[50];
	int Precio_Unitario,Tramo,Pre2,T2,Pre3,T3,Pre4,T4,Pre5,T5; 
	printf("\n\n"); 
	printf("-----------------Registre sus Productos----------------\n\n");
	printf("********************  Registros  ********************************\n\n");
	printf("<<<<<<<<<<<<<<<<< Ingrese su Nombre del Producto >>>>>>>>>>>>>>>>>> \n");
	scanf("%s",&Nombre);
	printf("---------------- Ingrese el Peso del Producto ------------------ \n");
	scanf("%s",&Peso);
    printf("=============== Ingrese el Precio_Unitaro de dicho Producto ==============  \n");
	scanf("%d",&Precio_Unitario);  
	printf("***************** Ingrese la Categoria del Producto ************** \n");
	scanf("%s",&Categoria);
	printf("/////////////// Ingrese el Tramo al que pertenece dicho Producto /////////////////  \n");
	scanf("%d",&Tramo);
	printf("=============== Ingrese el Proveedor del Producto ==============  \n");
	scanf("%s",&Proveedor);
	printf("********************  Registros2  ********************************\n\n");
	printf("<<<<<<<<<<<<<<<<< Ingrese su Nombre del Producto >>>>>>>>>>>>>>>>>> \n");
	scanf("%s",&N2);
	printf("---------------- Ingrese el Peso del Producto ------------------ \n");
	scanf("%s",&Pe2);
    printf("=============== Ingrese el Precio_Unitaro de dicho Producto ==============  \n");
	scanf("%d",&Pre2);  
	getch();
	printf("***************** Ingrese la Categoria del Producto ************** \n");
	scanf("%s",&C2);
	printf("/////////////// Ingrese el Tramo al que pertenece dicho Producto /////////////////  \n");
	scanf("%d",&T2);
	printf("=============== Ingrese el Proveedor del Producto ==============  \n");
	scanf("%s",&Pr2);
	printf("********************  Registros3  ********************************\n\n");
	printf("<<<<<<<<<<<<<<<<< Ingrese su Nombre del Producto >>>>>>>>>>>>>>>>>> \n");
	scanf("%s",&N3);
	printf("---------------- Ingrese el Peso del Producto ------------------ \n");
	scanf("%s",&Pe3);
    printf("=============== Ingrese el Precio_Unitaro de dicho Producto ==============  \n");
	scanf("%d",&Pre3);  
	printf("***************** Ingrese la Categoria del Producto ************** \n");
	scanf("%s",&C3);
	printf("/////////////// Ingrese el Tramo al que pertenece dicho Producto /////////////////  \n");
	scanf("%d",&T3);
	printf("=============== Ingrese el Proveedor del Producto ==============  \n");
	scanf("%s",&Pr3);
	printf("********************  Registros 4  ********************************\n\n");
	printf("<<<<<<<<<<<<<<<<< Ingrese su Nombre del Producto >>>>>>>>>>>>>>>>>> \n");
	scanf("%s",&N4);
	printf("---------------- Ingrese el Peso del Producto ------------------ \n");
	scanf("%s",&Pe4);
    printf("=============== Ingrese el Precio_Unitaro de dicho Producto ==============  \n");
	scanf("%d",&Pre4);  
	printf("***************** Ingrese la Categoria del Producto ************** \n");
	scanf("%s",&C4);
	printf("/////////////// Ingrese el Tramo al que pertenece dicho Producto /////////////////  \n");
	scanf("%d",&T4);
	printf("=============== Ingrese el Proveedor del Producto ==============  \n");
	scanf("%s",&Pr4);   
	printf("********************  Registros 5  ********************************\n\n");
	printf("<<<<<<<<<<<<<<<<< Ingrese su Nombre del Producto >>>>>>>>>>>>>>>>>> \n");
	scanf("%s",&N5);
	printf("---------------- Ingrese el Peso del Producto ------------------ \n");
	scanf("%s",&Pe5);
    printf("=============== Ingrese el Precio_Unitaro de dicho Producto ==============  \n");
	scanf("%d",&Pre5);  
	getch();
	printf("***************** Ingrese la Categoria del Producto ************** \n");
	scanf("%s",&C5);
	printf("/////////////// Ingrese el Tramo al que pertenece dicho Producto /////////////////  \n");
	scanf("%d",&T5);
	printf("=============== Ingrese el Proveedor del Producto ==============  \n");
	scanf("%s",&Pr5);   
	
    gotoxy(3,71);
    printf("Tramo 1\n");
	printf ("\tNombre del Producto:%s\n",Nombre);
	printf ("\tPeso:%s \n",Peso);
	printf ("\tPrecio:%d \n",Precio_Unitario);
	printf ("\tCategoria:%d \n",Categoria);
	printf ("\tProveedor:%s \n",Proveedor);
  
   gotoxy(40,90);
    printf("Tramo 2\n");
	printf ("\t\t\t\t\tNombre del Producto:%s\n",N2);
	printf ("\t\t\t\t\tPeso:%s \n",Pe2);
	printf ("\t\t\t\t\tPrecio:%d \n",Pre2);
	printf ("\t\t\t\t\tCategoria:%d \n",C2);
	printf ("\t\t\t\t\tProveedor:%s \n",Pr2);
    
	gotoxy(50,79);
    printf("Tramo 3\n");
	printf ("\t\t\t\t\t\tNombre del Producto:%s\n",N3);
	printf ("\t\t\t\t\t\tPeso:%s \n",Pe3);
	printf ("\t\t\t\t\t\tPrecio:%d \n",Pre3);
	printf ("\t\t\t\t\t\tCategoria:%d \n",C3);
	printf ("\t\t\t\t\t\tProveedor:%s \n",Pr3);
	
	 gotoxy(12,100);
    printf("Tramo 4\n");
	printf ("\t\tNombre del Producto:%s\n",N4);
	printf ("\t\tPeso: %s \n",Pe4);
	printf ("\t\tPrecio: %d \n",Pre4);
	printf ("\t\tCategoria: %d \n",C4);
	printf ("\t\tProveedor: %s \n",Pr4);
	printf ("\t\tNombre del Producto:%s\n",N5);
	printf ("\t\tPeso: %s \n",Pe5);
	printf ("\t\tPrecio: %d \n",Pre5);
	printf ("\t\tCategoria: %s \n",C5);
	printf ("\t\tProveedor: %s \n",Pr5);
getch();
}





