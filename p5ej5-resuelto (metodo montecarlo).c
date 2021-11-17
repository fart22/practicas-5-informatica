#include <stdio.h>
#include <stdlib.h>

int main() {
	int i, idado1, idado2;
	float dado1,dado2;
	int tiradas[13]={0,0,0,0,0,0,0,0,0,0,0,0,0};
	for (i=0;i<1000;i++){
		dado1=rand();//parece ser que en linux hay que hacerlo en DOS partes. Primero a una variable FLOAT metemos RAND()
		dado2=rand();
		idado1 = 1+dado1*6/RAND_MAX;//y luego en una variable INT metemos ya el resultado ajustado con operaciones y tal..
		idado2 = 1+dado2*6/RAND_MAX;//si no se unas una variable float intermedia o se realizan operaciones directamente sobre RADN() el resultado es nulo.
		tiradas[idado1+idado2]++;
		//printf("%i %i %i\n", idado1, idado2, tiradas[idado1+idado2]);
	}
	for (i=2;i<=12;i++){
		printf("resultado igua a: %i\t veces %i\n", i, tiradas[i]);
	}
	return 0;
}

