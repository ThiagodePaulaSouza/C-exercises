#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <Windows.h>
void clrscr(){
    system("@cls||clear");
}
void gotoxy(int x, int y){
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), (COORD){x-1,y-1});
}
void main() {
    //Define Váriaveis
    char nome[30];
    int cod_funcao;
    float qtd_pecas, promocao = 0;

    //input do usuario
    clrscr();
    gotoxy(10,5);
    printf("Calculo Premio de Producao: ");
    gotoxy(10,10);
    printf("Entre com seu Nome: ");
    scanf("%s", &nome);
    gotoxy(10,12);
    printf("Entre com o codigo da funcao: ");
    scanf("%i", &cod_funcao);
    gotoxy(10,14);
    printf("Informe a quantidade de pecas produzidas: ");
    scanf("%f", &qtd_pecas);
    gotoxy(10,16);

	//Cálculo do Premio de Producão por peças
	if(cod_funcao == 101)
	{
		promocao = qtd_pecas * 1.00f;
		if(promocao >= 10000)
			promocao += 500;
	}
	else if(cod_funcao == 105)
	{
		promocao = qtd_pecas * 0.91f;
		if(promocao >= 10000)
			promocao += 350;
	}
	else if(cod_funcao == 110)
	{
		promocao = qtd_pecas * 0.80f;
		if(promocao >= 10000)
			promocao += 400;
	}
	else if(cod_funcao >= 115 && cod_funcao <= 120)
	{
		promocao = qtd_pecas * 0.95f;
		if(promocao >= 10000)
			promocao += 420;
	}

    //output para o usuario
    printf("O valor do premio da promocao foi: %f", promocao);
}