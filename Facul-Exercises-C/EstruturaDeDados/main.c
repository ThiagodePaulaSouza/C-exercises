#include <stdio.h>
#include <stdlib.h>

void main()
{
	/*Declaração de Variavéis */

	int Dias;
	float Anos;
	printf ("Entre com o numero de dias: ");

	/*Entrada de Dados */

	scanf("%d", &Dias);

	/*Conversão de Dias para Anos */

	Anos = Dias/365.25;
	printf("\n\n%d dias equivalem a %f anos.\n", Dias, Anos);
}
