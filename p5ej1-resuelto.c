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
	printvector (a,3);
	printvector (b,3);
	printvector (c,5);	
	printvector (d,5);
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
	printf("]\n");
	return;
	}
