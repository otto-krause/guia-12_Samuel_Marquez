#include <stdio.h>
#include <stdlib.h>
//Falta declaracion de la función
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
		
	
	int main( ) 
	{
	int n1,n2;
	n1 = ing1();
	n2= ing2();
	printf("El primer numero ingresado fue %d, el segundo fue %d ",n1,n2);	
	return 0;
	}

	int ing1()
	{
		int s;
		printf("Ingrese un numero ");
		scanf("%d",&s);
		return s;
	}
	
	int ing2()
	{
		int a;
		printf("Ingrese un numero ");
		scanf("%d",&a);
		return a;
	}
