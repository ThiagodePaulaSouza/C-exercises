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

#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <ctype.h>
#include <Windows.h>

void clrscr()
{
    system("@cls||clear");
}
void gotoxy(int x, int y)
{
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), (COORD){x - 1, y - 1});
}

void main() {
    /* Variaveis */
    int vetorA[20], vetorB[20];
    int i, j=10;

    /* Entrada de Dados */
    clrscr();
    gotoxy(10, 4);
    printf("Digite um 20 numeros!");
    for(i = 0; i < 20; i++) 
	{
        gotoxy(j, i+6);
        scanf("%i", &vetorA[i]);
    }

    /* Calculo de Dados e Saída de Dados */ 
    gotoxy(60, 4);
	printf("O Resultado da Inversao foi: \n");
    for(i=0, j = 19; i<20 && j >= 0; i++, j-- ) 
	{
        //Beep(400, 500);
        gotoxy(60, i+6);
        vetorB[i] = vetorA[j];
        printf("%i \n", vetorB[i]);
    }
}