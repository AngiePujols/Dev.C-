#include <stdio.h>
#include <iostream>
#include <conio.h>
#include <fstream>
using namespace std;
string convertToString(char* cadena) 
{ 
    string s(cadena); 
    return s; 
} 
  
int main(){
	char cadena[100];

	printf("Digite un Texto");
	scanf("%s",&cadena);
	string s=convertToString(cadena);
	ofstream archivo;
	archivo.open("Datos.txt");
	archivo << s; 
	printf("Sus Datos Fueron Guardados");
	getch();
	
}
