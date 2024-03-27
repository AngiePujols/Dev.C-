#include <stdio.h>
#include <windows.h>
#include<conio.h>

int main()
{
	int i,j,rango;
	printf("\tIngrese el rango de su arbolito:\n");
	scanf("%d",&rango);
	for(i=1;i<=rango;i++)
	{  
		for(j=1;j<=rango-i;j++)
		printf(" ");
		for(j=1;j<=2*i-1;j++)
		 printf("*");
		 printf("\n");    
	}
}
