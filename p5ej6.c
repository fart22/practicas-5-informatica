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
	gets (mensaje);

	/* Sigue a partir de aqui... */
	
	








	/* Imprime SMS y su longitud... */
	printf ("El mensaje convertido es: %s\n", sms);
	printf ("Su longitud: %d caracteres\n", strlen(sms));
		
	return 0;
}
