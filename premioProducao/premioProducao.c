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
//Cálculo do Premio de Producão por peças
float CalcularPromocao(int cod, int qtd)
{
	float promocao = 0;

	if(cod == 101)
	{
		promocao = qtd * 1;
		if(promocao > 10000)
			promocao += 500;
	}
	else if(cod == 105)
	{
		promocao = qtd * 0.91f;
		if(promocao > 10000)
			promocao += 350;
	}
	else if(cod == 110)
	{
		promocao = qtd * 0.80f;
		if(promocao > 10000)
			promocao += 400;
	}
	else if(cod >= 115 && cod <= 120)
	{
		promocao = qtd * 0.95f;
		if(promocao > 10000)
			promocao += 420;
	}
	return promocao;
}
void main() {
    //Define Váriaveis
    char nome[30];
    int cod_funcao;
    float qtd_pecas, premio_peca, promocao;

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

    //output para o usuario
    printf("O valor da promocao foi: %f", CalcularPromocao(cod_funcao, qtd_pecas));
	return 0;
}