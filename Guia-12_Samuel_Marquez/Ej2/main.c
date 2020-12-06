#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */


		int main( ) {
			int aa=0,bb=0,resul=0,res1,res2;
			printf(" Ingrese un numero ");
			scanf("%d",&aa);
			printf(" Ingrese otro numero ");		
			scanf("%d",&bb);
			res1=area(aa,bb);
			res2=perimetro(aa,bb);
			printf(" El area es %d",res1);
			printf(" El perimetro es %d ",res2);
					
		}
	
	int area(int aa, int bb)
	{
		int ar=0;
		ar=aa*bb;
		return ar;
	}
	
	int perimetro(int aa, int bb)
	{
		int per=0;
		per=(2*aa)+(2*bb);
		return per;	
	}
