/**
 * @file produtoAlimenticio.c
 * @author Thiago de Paula Souza
 * @brief 
 * @version 0.1
 * @date 2021-09-17
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

int idade = 0, opniao = 0, sexo = 0;

void EntrarDados()
{
	clrscr();
    gotoxy(48, 4);
    printf("Pesquisa sobre a qualidade: ");
    gotoxy(46, 6);
    printf("Digite -1 para sair do programa: ");
    
    gotoxy(10, 12);
    printf("Digite sua idade: ");
    scanf("%d", &idade);
    if (idade >= 0)
    {
    	gotoxy(50, 12);
        printf("Digite seu sexo: ");
        gotoxy(50, 14);
        printf("1 - Homem: ");
        gotoxy(50, 16);
        printf("2 - Mulher: ");
        gotoxy(67, 12);
        scanf("%d", &sexo);
        
		gotoxy(90, 12);
        printf("Digite sua opniao: ");
        gotoxy(90, 14);
        printf("1 - pessimo: ");
        gotoxy(90, 16);
        printf("2 - ruim: ");
        gotoxy(90, 18);
        printf("3 - regular: ");
        gotoxy(90, 20);
        printf("4 - bom: ");
        gotoxy(90, 22);
        printf("5 - otimo: \n");
        gotoxy(109, 12);
        scanf("%d", &opniao);
    }
}

void main()
{

    /* Variaveis */

    int qtdMQuarentaBom, qtdMCinquentaRuim, qtdHPessimo, totalHomens, totalMulheres;

    /* Entrada de Dados */
    EntrarDados();

    /* Calculo de Dados */
    while (idade >= 0)
    {
        if (sexo == 1)
        {
            totalHomens += 1;
            if (opniao == 1)
            {
                qtdHPessimo += 1;
            }
        }
        if (sexo == 2)
        {
            totalMulheres = totalMulheres + 1;
            if (idade > 40 && opniao == 4)
            {
                qtdMQuarentaBom = qtdMQuarentaBom + 1;
            }
            else if (idade > 50 && opniao == 2)
            {
                qtdMCinquentaRuim = qtdMCinquentaRuim + 1;
            }
        }
        EntrarDados();
    }

    /*Sáida de Dados */
    clrscr();
    gotoxy(48, 4);
    printf("Pesquisa sobre a qualidade: ");
    gotoxy(44, 6);
    printf("Relatorio da Pesquisa de qualidade: ");
    
    gotoxy(10, 10);
    printf("O total de homens que participaram desta pesquisa foi: %d", totalHomens);
    gotoxy(10, 12);
    printf("O total de mulheres que participaram desta pesquisa foi: %d", totalMulheres);
    gotoxy(10, 14);
    printf("O total de homens que participaram desta pesquisa que indicaram como pessimo foi: %d", qtdHPessimo);
    gotoxy(10, 16);
    printf("O total de mulheres que participaram desta pesquisa tem mais de 40 anos e indicaram como bom foi: %d", qtdMQuarentaBom);
    gotoxy(10, 18);
    printf("O total de mulheres que participaram desta pesquisa tem mais de 50 anos e indicaram como ruim foi: %d", qtdMCinquentaRuim);
    gotoxy(10, 20);
}