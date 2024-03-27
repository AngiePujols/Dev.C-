#include<stdio.h>
#include <iostream>

using namespace std; 

int main () 
{
  int salario, aumento;
 char TS;
	printf("\n\n\n\n");
	printf("*********************************************\n");
	printf("      Indique Su Tipo de Salario \n");
	printf("          a) De 0 a $16 000 \n");
	printf("       b) De $16 000 a $23 000 \n");
	printf("          c) $23 000 a $29 000 \n");
	printf("           d) Mas de $29 000 \n");
	printf("*********************************************\n");
	scanf("%s",&TS);
	printf("Ingrese su Salario Actual \n");
	scanf("%d",&salario);

	switch (TS) {
	  case 'a': 
	  case 'A':
	  	if (salario >= 16000) {
	  		cout << "Salario No corespondiente al Rango Seleccionado";
			break;	
		}
	  	aumento = salario + (salario * 0.184);
	  	cout<<"Su nuevo salario sera: 1"<<aumento<<endl;
	  	break; 
	  case 'b': 
	  case 'B': 
	  	if (salario < 16000 || salario >= 23000) {
	  		cout << "Salario No corespondiente al Rango Seleccionado";
			break;	
		}
	  	aumento = salario + (salario * 0.091);
	  	cout<<"Su nuevo salario sera: "<<aumento<<endl;
	  	break;
	  case 'c': 
	  case 'C':
	  	if (salario < 23000 || salario >= 29000) {
	  		cout << "Salario No corespondiente al Rango Seleccionado";
			break;	
		}
	  	aumento = salario + (salario * 0.045);
	  	cout<<"Su nuevo salario sera: "<<aumento<<endl;
	  	break;
	  case 'd': 
	  case 'D':
	  	if (salario < 29000) {
	  		cout << "Salario No corespondiente al Rango Seleccionado";
			break;	
		}
	  	aumento = salario + (salario * 0.035);
	  	cout<<"Su nuevo salario sera: "<<aumento<<endl;
	  	break;
	  default:
	  	cout<<"Opcion no valida";
	return 0;	}

}
