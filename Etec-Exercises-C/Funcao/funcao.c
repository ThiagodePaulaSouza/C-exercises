#include <stdio.h>
#include <stdlib.h>

void mensagem(void)
{
    printf("***********************");
    printf("\nETEC Armando Pannunzio\n");
    printf("***********************\n");
}

int multiplicacao(int n1, int n2)
{
    int produto;
    produto = n1 * n2;
    return (produto);
}

void main()
{
    int v1, v2, resultado;
    //chamar a funcao mensagem
    mensagem();
    printf("\nDigite o primeiro valor: ");
    scanf("%d", &v1);
    printf("\nDigite o primeiro valor: ");
    scanf("%d", &v2);
    //chamar a funcao multiplicacao
    resultado = multiplicacao(v1, v2);
    printf("\nResultado = %d\n", resultado);
}