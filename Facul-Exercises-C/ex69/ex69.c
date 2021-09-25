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
#include <Windows.h>

void clrscr()
{
    system("@cls||clear");
}
void gotoxy(int x, int y)
{
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), (COORD){x - 1, y - 1});
}

void main()
{
    /* Variaveis */
    int vetorA[20], vetorB[20];
    int i, j;

    /* Entrada de Dados */
    clrscr();
    gotoxy(10, 4);
    printf("Digite um 20 numeros!");
    for (i = 0; i < 20; i++)
    {
        gotoxy(10, i + 6);
        scanf("%i", &vetorA[i]);
    }

    /* Calculo de Dados */
    gotoxy(60, 4);
    printf("O Resultado da Inversao foi: \n");
    for (i = 0, j = 19; i < 20 && j >= 0; i++, j--)
    {
        vetorB[i] = vetorA[j];
    }

    /* Saída de Dados */
    clrscr();
    gotoxy(10, 4);
    printf("Vetor A:");
    gotoxy(60, 4);
    printf("Vetor B:");
    for ( i = 0; i < 20; i++)
    {
        gotoxy(10, i + 6);
        printf("%i", vetorA[i]);

        gotoxy(60, i + 6);
        printf("%i \n", vetorB[i]);
    }
    getch();
}