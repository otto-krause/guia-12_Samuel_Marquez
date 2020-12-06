#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

	float oct(float num);
	
	int main() {
	float num=0,res;
	printf(" Ingrese un numero ");
	scanf("%f",&num);
	res=oct(num);
	printf(" La octava parte de %.2f es %.2f ",num,res);	
	}
	
	float oct (float num){
		return num/8;
	}
	
