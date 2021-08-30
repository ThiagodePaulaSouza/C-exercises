#include <stdio.h>
#include <stdlib.h>

void main()
{
	/*Declaracao de Variaveis */

	int Dias;
	float Anos;
	printf ("Entre com o numero de dias: ");

	/*Entrada de Dados */

	scanf("%d", &Dias);

	/*Conversao de Dias para Anos */

	Anos = Dias/365.25;
	printf("\n\n%d dias equivalem a %.2f anos.\n", Dias, Anos);
}
