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
    char nomeCliente[30], nomeVendedor[30];
    float numPecas = 0.0f, valorFrete = 0.0f, valorFretePeca = 0.0f, abatimentoFrete = 0.0f, comissao = 0.0f, lucro = 0.0f, custoPeca = 7.00f, custoTotal = 0.0f, valorTotal = 0.0f, comissaoVendedor = 0.0f;
    int codRegiao = 0;

    /* Entrada de Dados */
    clrscr();
    gotoxy(10, 8);
    printf("Informe o codigo da Regiao: ");
    scanf("%i", &codRegiao);
    gotoxy(10, 10);
    printf("Digite o nome do Cliente: ");
    scanf("%s", &nomeCliente);
    gotoxy(10, 12);
    printf("Informe o numero de pecas vendidas: ");
    scanf("%f", &numPecas);
    gotoxy(10, 14);
    printf("Digite o nome do vendedor: ");
    scanf("%s", &nomeVendedor);

    /* Calculo de Dados */
    custoTotal = custoPeca * numPecas;
    valorTotal = custoTotal + (custoTotal * 0.50f);
    comissaoVendedor = valorTotal * 0.065f;
    lucro = valorTotal - custoTotal - comissaoVendedor;

    switch (codRegiao)
    {
    case 1:
        valorFretePeca = 1.00f;
        abatimentoFrete = 0.10f;
        valorFrete = numPecas * valorFretePeca;
        if (numPecas > 999.0f)
        {
            valorFrete = valorFrete - (valorFrete * abatimentoFrete);
        }
        break;
    case 2:
        valorFretePeca = 1.10f;
        abatimentoFrete = 0.08f;
        valorFrete = numPecas * valorFretePeca;
        if (numPecas > 999.0f)
        {
            valorFrete = valorFrete - (valorFrete * abatimentoFrete);
        }
        break;
    case 3:
        valorFretePeca = 1.15f;
        abatimentoFrete = 0.07f;
        valorFrete = numPecas * valorFretePeca;
        if (numPecas > 999.0f)
        {
            valorFrete = valorFrete - (valorFrete * abatimentoFrete);
        }
        break;
    case 4:
        valorFretePeca = 1.20f;
        abatimentoFrete = 0.11f;
        valorFrete = numPecas * valorFretePeca;
        if (numPecas > 999.0f)
        {
            valorFrete = valorFrete - (valorFrete * abatimentoFrete);
        }
        break;
    case 5:
        valorFretePeca = 1.25f;
        abatimentoFrete = 0.15f;
        valorFrete = numPecas * valorFretePeca;
        if (numPecas > 999.0f)
        {
            valorFrete = valorFrete - (valorFrete * abatimentoFrete);
        }
        break;
    case 6:
        valorFretePeca = 1.30f;
        abatimentoFrete = 0.12f;
        valorFrete = numPecas * valorFretePeca;
        if (numPecas > 999.0f)
        {
            valorFrete = valorFrete - (valorFrete * abatimentoFrete);
        }
        break;
    case 7:
        valorFretePeca = 1.40f;
        abatimentoFrete = 0.18f;
        valorFrete = numPecas * valorFretePeca;
        if (numPecas > 999.0f)
        {
            valorFrete = valorFrete - (valorFrete * abatimentoFrete);
        }
        break;
    case 8:
        valorFretePeca = 1.35f;
        abatimentoFrete = 0.15f;
        valorFrete = numPecas * valorFretePeca;
        if (numPecas > 999.0f)
        {
            valorFrete = valorFrete - (valorFrete * abatimentoFrete);
        }
        break;

    default:
        gotoxy(10, 18);
        printf("Este codigo de regiao nao existe");
        gotoxy(10, 20);
        return 0;
        break;
    }

    /* Saida de dados */
    gotoxy(10, 18);
    printf("Caro(a) Senhor(a) %s, O valor do frete sera: R$%.2f, e o lucro obtido sera: R$%.2f", nomeCliente, valorFrete, lucro);
    gotoxy(10, 20);
    return 0;
}