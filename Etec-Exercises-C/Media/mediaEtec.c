/*
    input: 3 notas
    output: exibe media
*/
#include <stdio.h>
#include <stdlib.h>
void main(){
    int i=0, notas[1000], media=0;
    printf("-----Programa 6-----");
    printf("\nDigite 3 notas: \n\n");
    for (i = 0; i < 3; i++)
    {
        scanf("%i", &notas[i]);
        media += notas[i];
    }
    printf("\na media e: %i", media /= 3);

    printf("\n\nPrograma finalizado!\n");
};