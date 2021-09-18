/**
 * @file ex69.c
 * @author Thigas
 * @brief 
 * @version 0.1
 * @date 2021-09-18
 * 
 * @copyright Copyright (c) 2021
 * 
 */

/*
    variaveis
        vetorA com 20 elementos
        vetorB com 20 elementos
    entrada de dados
        digite os elementos do vetor A -- repete 20x
    calculo de dados
        o q eu acho né, eu acho que ele tem que percorrer o vetor inteiro salvar em uma variavel e dps só mostrar a variavel
        
    saida de dados
        apresente os elementos dos vetores A e B

    leia 2 vetores A com 20 elementos
    Construa um veto B da mesma dimensão com os mesmos elementos de A
    Sendo que estes deverão estar invertidos, 
    ou seja o primeiro elemento de A passa a ser o último elemento de B
    o segundo elemento de A passa a ser o penúltimo de B etc...
    Ao Final apresente os elementos dos dois vetores
*/
#include <stdio.h>
int main() {
    int vetorA[20], vetorB[20];
    int i, j;
    printf("\nDigite um 20 numeros!\n");
    for(i = 0; i < 20; i++) 
	{
        scanf("%i", &vetorA[i]);
    }
	printf("\nO Resultado da Inversao foi: ");
    for(i=0, j = 19; i<20 && j >= 0; i++, j-- ) 
	{
        vetorB[i] = vetorA[j];
        printf("\n%i", vetorB[i]);
    }
    return 0;
}