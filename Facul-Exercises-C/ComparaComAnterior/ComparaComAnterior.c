#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num[6], cont, contarMaior, contarMenor, contarIgual;
    for(cont = 0; cont<6; cont++){
        printf("\nDigite o valor: ");
        scanf("%i",&num[cont]);

        if(num[cont] > num[0]){
            printf("maior");
            contarMaior++;
        }
        else if(num[cont] < num[0]){
        printf("menor");
        contarMenor++;
        }
        else if(num[cont] == num[0]){
            printf("igual");
            contarIgual++;
        }
    }
    printf("\nQuantidade de numeros Maiores: %i", contarMaior);
    printf("\nQuantidade de numeros Menores: %i", contarMenor);
    printf("\nQuantidade de numeros Igual: %i", contarIgual);
    return 0;
}
