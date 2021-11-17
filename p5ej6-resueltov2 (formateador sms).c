#include <stdio.h>
#include <string.h>

#define LONMENSAJE 1024

int main()
{
	char mensaje[LONMENSAJE];
	char sms[LONMENSAJE];
	int i,j;
	unsigned char bandera = 0;
	
	printf ("Dame el mensaje: ");
	fflush (stdin);
	fgets (mensaje,LONMENSAJE,stdin);

	/* Sigue a partir de aqui... */
	j=0;
	for(i=0;i<strlen(mensaje);i++){
		if(!(mensaje[i]=='e'||mensaje[i]=='a'||mensaje[i]=='u'||mensaje[i]==' ')){
			if (bandera==1){
				if (mensaje[i]=='q'){
					sms[j]='K';
					}
				else{
					sms[j]=mensaje[i]-32;
					}
				j++;
				bandera=0;
				}
			else if(mensaje[i]=='q'){
				sms[j]='k';
				j++;
			}
				else{
				sms[j]=mensaje[i];
				j++;
				}
			}
		else if(mensaje[i]==' '){
			bandera=1;
			}
	}
	sms[j]=0;

	/* Imprime SMS y su longitud... */
	printf ("El mensaje convertido es: %s\n", sms);
	printf ("Longitud original: %lu caracteres\n", strlen(mensaje));
	printf ("Su longitud: %lu caracteres\n", strlen(sms));
		
	return 0;
}
