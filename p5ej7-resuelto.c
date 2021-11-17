#include <stdio.h>

void printvector    (float v[], int n);            /* Para el ejercicio 1 */
float pescalar      (float x[], float y[], int n); /* Para el ejercicio 2 */
int perpendiculares (float x[], float y[], int n); /* Para el ejercicio 7 */

int main()
{
	float a[3] = {4,-5,1};
	float b[3] = {-2,-2,-2};
	float c[5] = {1,0,-2,8,2};
	float d[5] = {3,6,3.3,1.12,-3};
	
	/* Aquí vienen las llamadas a funciones según
	dicte cada ejercicio */
	printf("El vector a es: ");
	printvector (a,3);
	printf("\nEl vector b es: ");
	printvector (b,3);
	printf("\nEl vector c es: ");
	printvector (c,5);
	printf("\nEl vector d es: ");
	printvector (d,5);
	
	
	printf("\n\nel producto de a.b es = %f\n", pescalar(a,b,3));
	printf("el producto de c.d es = %f\n", pescalar(c,d,3));
	
	printf("\nLos vectores ");
	printvector(a,3);
	printf(" y ");
	printvector(b,3);
	if(perpendiculares(a,b,3)){
		printf(" son perpendiculares");
		}
	else{
		printf(" no son perpendiculares");
		}
	
	printf("\nLos vectores ");
	printvector(c,5);
	printf(" y ");
	printvector(d,5);
	if(perpendiculares(c,d,5)){
		printf(" son perpendiculares");
	}
	else{
		printf(" no son perpendiculares");
	}
	
	return 0;	
}

/* A partir de aquí vienen las implementaciones de
   las funciones, según dicte cada ejercicio */
void printvector (float v[], int n){
	int i;
	printf("[");
	for (i=0;i<n;i++){
		if (i==n-1){
			printf("%.2f",v[i]);
		}
		else {
		printf("%.2f, ", v[i]);
		}
	}
	printf("]");
	return;
	}
	
	float pescalar (float x[], float y[], int n){
		int i;
		float suma = 0;
		for (i=0;i<n;i++){
			suma=suma+x[i]*y[i];
		}
		return suma;
	}
		
int perpendiculares (float x[], float y[], int n){
	if (pescalar(x,y,n)==0){
		return 1;
	}
	else{
		return 0;
	}
}
