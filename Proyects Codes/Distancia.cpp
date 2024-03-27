#include <iostream>
#include <string.h>
#include <stdio.h>
#include <conio.h>
#include<windows.h>
#include<stdlib.h>
#include<time.h>
class Registro {
 // Por omisión esto es la sección privada
 char nombre[50];
 char telefono[15];
public: // Sección pública
 void Iniciar (void);
 void EntradaDatos (void);
 void SalidaDatos (void);
} registro1;
// Programa principal
void main(void) {
 Registro registro2;
 registro1.Iniciar();
 registro2.Iniciar();
 registro1.EntradaDatos();
 registro2.EntradaDatos();
 registro1.SalidaDatos();
 registro2.SalidaDatos();
}
// Funciones miembro de la clase Registro
void Registro::Iniciar (void) {
 strcpy(nombre, "");
 strcpy(telefono, "");
}
void Registro::EntradaDatos (void) {
 cout << "\nNombre: ";
 cin >> nombre;
 cout << "Teléfono: ";
 cin >> telefono;
}
void Registro::SalidaDatos (void) {
 cout << "\n\nNombre:\t\t" << nombre << "\n";
 cout << "Teléfono:\t" << telefono << "\n";
} 
