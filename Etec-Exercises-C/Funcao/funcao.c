#include <stdio.h>
#include <stdlib.h>

void mensagem(void)
{
    printf("***********************");
    printf("\nETEC Armando Pannunzio\n");
    printf("***********************\n");
}

int soma(int n1, int n2)
{
    int adicao;
    adicao = n1 + n2;
    return (adicao);
}

int subtracao(int n1, int n2)
{
    int diferenca;
    diferenca = n1 - n2;
    return (diferenca);
}

int multiplicacao(int n1, int n2)
{
    int produto;
    produto = n1 * n2;
    return (produto);
}

void main()
{
    int v1, v2, adicao, diferenca, produto;
    //chamar a funcao mensagem
    mensagem();
    printf("\nDigite o primeiro valor: ");
    scanf("%i", &v1);
    printf("\nDigite o primeiro valor: ");
    scanf("%i", &v2);
    //chamar a funcao multiplicacao
    adicao = soma(v1, v2);
    diferenca = subtracao(v1, v2);
    produto = multiplicacao(v1, v2);
    printf("\nResultado da soma = %d\n", adicao);
    printf("\nResultado da subtracao = %d\n", diferenca);
    printf("\nResultado da multiplicacao = %d\n", produto);
}