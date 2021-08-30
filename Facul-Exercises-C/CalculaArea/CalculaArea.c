#include <stdio.h>
#include <stdlib.h>



int main()
{
    int raio, area;
    printf("\nPrograma para calcular a area da curcunferencia");
    printf("\nDigite o valor do Raio:");
    scanf("%i", &raio);
    area = 3.14*(raio * raio);
    printf("\nArea = %i ", area, "\n");

    return 0;
}
