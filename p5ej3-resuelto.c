#include <stdio.h>
#include <string.h>

int main(int argc, char *argv[]) {
	int i,suma=0;
	char frase[1000];
	printf("Escibe una frase:");
	fflush(stdin);
	fgets(frase,1000,stdin);
	printf("La longitud de tu frase es:%i",strlen(frase));
	for (i=0;i<strlen(frase);i++){
		if (frase[i]=='e'||frase[i]=='E'){
			suma++;
		}
	}
	printf("\nEsta frase tiene en total %i Ees",suma);
	return 0;
}

