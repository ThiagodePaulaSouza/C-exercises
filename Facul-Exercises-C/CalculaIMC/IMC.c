#include <stdio.h>
#include <stdlib.h>
int main()
{
    float altura, peso, imc;
    int opcao;
    do
    {
        printf("\nPrograma para calcular IMC\n");
        printf("\nDigite o seu verdadeiro peso: ");
        scanf("%f", &peso);
        printf("Digite sua altura: ");
        scanf("%f", &altura);

        imc = peso/(altura*altura);
        printf("\nIMC = %f\n", imc);

        if(imc <= 18.5){
            printf("\nAbaixo do peso normal!\n");
        }
        else if(imc > 18.5 && imc <= 25){
            printf("\nPeso normal!\n");
        }
        else if(imc > 25 && imc <= 30){
            printf("\nPeso acima do normal!\n");
        }
        else if(imc > 30){
            printf("\nPeso excessivo!\n");
        }

        printf("\nDigite 1 para continuar: ");
        scanf("%i", &opcao);
    }while(opcao == 1);
    return 0;
}
