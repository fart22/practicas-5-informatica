#include <stdio.h>
#include <string.h>
int main() {
	char frase [1000];
	char frase2 [1000]="";
	char cadena;
	int i;
	printf("Dame una fase para poner en mayusculas:");
	fflush(stdin);
	fgets(frase, 1000, stdin);
	printf("Original>> %s",frase);
	for (i=0;i<strlen(frase);i++){
		if (frase[i]<='z'&&frase[i]>='a'){
			frase2[i]=frase[i]-32;
		}
		else{
			frase2[i]=frase[i];
		}
		//strcat(frase2,cadena);
	}
	printf("En Mayusculas>> %s",frase2);
	return 0;
}

