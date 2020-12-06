#include <stdio.h>
#include <stdlib.h>

 
	float porcentaje_hombres(float ch,float ct);
	float porcentaje_mujeres(float cm, float ct);
	
	int main() {
	float ct=0,ch,cm,pm,ph;
	printf("Ingrese la cantidad de curriculums de hombres ");
	scanf("%f",&ch);
	printf("Ingrese la cantidad de curriculums de mujeres ");
	scanf("%f",&cm);	 
	ct=ch+cm;
	ph=porcentaje_hombres(ch,ct);
	pm=porcentaje_mujeres(cm,ct);
	printf("\n El porcentaje de hombres es %.2f",ph);
	printf("\n El porcentaje de mujers es %.2f",pm);
	}
	
	float porcentaje_hombres(float ch, float ct){

	return (ch*100)/ct;

	}
	
	float porcentaje_mujeres(float cm, float ct){

	return (cm*100)/ct;

	
	}
	
