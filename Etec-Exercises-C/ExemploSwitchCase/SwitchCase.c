#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

void main(){
	int num;
	printf("Restaurante Pannunzio\n\n");
	printf("Escolha pelo numero: \n\n");
	printf("1 - Feijoada\n");
	printf("2 - Macarronada\n");
	printf("3 - Frango\n");
	printf("4 - Parmegiana\n\n");
	printf("Escolha um numero: \n");
	scanf("%i", &num);
	
	switch(num){
		case 1:		printf("R$ 25,00");		break;
		case 2:		printf("R$ 15,00");		break;
		case 3:		printf("R$ 30,00");		break;
		case 4:		printf("R$ 20,00");		break;
		default:	printf("Prato indisponivel no cardápio");
	}
}
