#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

	float presion(float fue, float su);
	int main() {
	float su=0,fue=0,resul=0;	
	printf(" Ingrese la fuerza ");
	scanf("%f",&fue);
	printf(" Ingrese la superficie ");
	scanf("%f",&su);
	resul=presion (fue,su);
	printf("La presion es = %f ",resul);
	}
	
	float presion(float fue, float su){
	return fue/su;
	}
