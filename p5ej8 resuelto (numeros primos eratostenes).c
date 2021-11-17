#include <stdio.h>

int main()
{
	int esprimo[101]; /* para contener numeros del 1 al 100 */
	int i,n,m;
	
	for (i=1;i<=100;i++)
	{
		esprimo[i] = 1;  /* asumo que todos son primos, al principio */
	}
	
	/* Sigue aqui el ejercicio... */
	for (n=2;n<=100;n++){
		if(esprimo[n]!=0){
			for(m=n*2;m<=100;m=m+n){
			esprimo[m]=0;
			}
		}
	}
		
	
	/* Imprimir lista de numeros primos */
	for (i=1;i<=100;i++)
	{
		if (esprimo[i])  /* si es primo... */
		{
			printf ("%d ", i);  /* ...lo imprimimos */
		}
	}
	return 0;
}
