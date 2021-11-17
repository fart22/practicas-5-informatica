#include <stdio.h>
#include <math.h>
#include <stdlib.h>  /* Necesaria para la funci�n abs() */

float e12[]={ 1, 1.2, 1.5, 1.8, 2.2, 2.7, 3.3, 3.9, 4.7, 5.6, 6.8, 8.2 };
float e24[]={ 1, 1.1, 1.2, 1.3, 1.5, 1.6, 1.8, 2, 2.2, 2.4, 2.7, 3, 3.3, 
              3.6, 3.9, 4.3, 4.7, 5.1, 5.6, 6.2, 6.8, 7.5, 8.2, 9.1 };
float e48[]={ 1, 1.05, 1.1, 1.15, 1.21, 1.27, 1.33, 1.4, 1.47, 1.54, 
              1.62, 1.69, 1.78, 1.87, 1.96, 2.05, 2.15, 2.26, 2.37, 
			  2.49, 2.61, 2.74, 2.87, 3.01, 3.16, 3.32, 3.48, 3.65, 
			  3.83, 4.02, 4.22, 4.42, 4.64, 4.87, 5.11, 5.36, 5.62, 
			  5.9, 6.19, 6.49, 6.81, 7.15, 7.5, 7.87, 8.25, 8.66, 
			  9.09, 9.53 };

int main()
{
  float resistencia, diferencia_menor, diferencia_actual;
  int i, imenor;
  
  /* Leer valor de resistencia por teclado */
  printf("Por favor, introduce un valor de resistencia entre 1 y 10: ");
  fflush(stdin);
  scanf("%f", &resistencia);
   
  
  /* Calcular el valor de resistencia m�s cercano seg�n las tablas */
  /* Usa la variable i para recorrer las tablas */  
  imenor = 0;
  for (i=0;i<24;i++){
	  diferencia_menor=abs(e24[imenor]-resistencia);
	  diferencia_actual=abs(e24[i]-resistencia);
	  if(diferencia_actual<diferencia_menor){
		  imenor=i;
		}
	}
    
  /* Mostrar por pantalla el valor de resistencia de la tabla m�s cercano */
  /* al que se hab�a introducido por teclado, es decir, el elemento "imenor"
  de la tabla que hayamos usado */
  printf("\nEl valor mas cercano es: %f",e24[imenor]);
  
    
  return 0;  
}

