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

    /*Variáveis*/
    char nomeFuncionario[30];
    float salarioBruto, descontoHoras, valorHoras, descontoInss, salarioLiquido, horas;

    /*Entrada de Dados */
    clrscr();
    gotoxy(10, 5);
    printf("Calculo do Salario Liquido");
    gotoxy(10, 10);
    printf("Digite o nome do funcionario: ");
    scanf("%s", &nomeFuncionario);
    gotoxy(10, 12);
    printf("Informe o Salario Bruto: ");
    scanf("%f", &salarioBruto);
    gotoxy(10, 14);
    printf("Digite o numero de horas devidas: ");
    scanf("%f", &horas);

    /* Calculo de Dados */
    valorHoras = salarioBruto / 240;
    descontoHoras = valorHoras * horas;
    descontoInss = salarioBruto * 0.085;

    /*Saída de dados*/
    gotoxy(10, 18);
    printf("Caro(a) Senhor(a) %s, seu Calculo do Salario Liquido foi de: R$%.2f", nomeFuncionario, salarioLiquido = salarioBruto - descontoHoras - descontoInss);
    gotoxy(10, 20);
    return 0;
}