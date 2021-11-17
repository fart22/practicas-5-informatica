#include <stdio.h>
#include <string.h>

#define LONMENSAJE 1024

int main()
{
	char mensaje[LONMENSAJE];
	char sms[LONMENSAJE];
	int i,j;
	
	printf ("Dame el mensaje: ");
	fflush (stdin);
	fgets (mensaje,LONMENSAJE,stdin);

	/* Sigue a partir de aqui... */
	j=0;
		for(i=0;i<strlen(mensaje);i++){
		if(!(mensaje[i]=='e'||mensaje[i]=='a'||mensaje[i]=='u')){
			if(mensaje[i]=='q'){
				sms[j]='k';
			}
			else{
			sms[j]=mensaje[i];
			}
			j++;
			}
		
		}
	sms[j]=0;
	

	/* Imprime SMS y su longitud... */
	printf ("El mensaje convertido es: %s\n", sms);
	printf ("Longitud original: %lu caracteres\n", strlen(mensaje));
	printf ("Su longitud: %lu caracteres\n", strlen(sms));
		
	return 0;
}
