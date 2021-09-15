#include <stdio.h>
#include <stdlib.h>

void mensagem(void)
{
    printf("**********ex1*************");
    printf("\nMedidor de Raio Pannunzio\n");
    printf("***********************\n");
}

int calcular(int raio)
{
    int area;
    area = 3.14*(raio * raio);
    return (area);
}
int main()
{
    int raio, area;
    mensagem();
    printf("\nDigite o valor do raio: ");
    scanf("%i", &raio);
    area = calcular(raio);
    printf("\nArea = %i\n", area);
}