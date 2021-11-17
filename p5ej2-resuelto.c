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
	printf("el producto de a.b es = %f\n", pescalar(a,b,3));
	printf("el producto de c.d es = %f\n", pescalar(c,d,3));
	return 0;	
}

/* A partir de aquí vienen las implementaciones de
   las funciones, según dicte cada ejercicio */
float pescalar (float x[], float y[], int n){
	int i;
	float suma = 0;
	for (i=0;i<n;i++){
		suma=suma+x[i]*y[i];
		}
	return suma;
	}
