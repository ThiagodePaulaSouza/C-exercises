#include <stdio.h>
#include <stdlib.h>
/*
    INPUT peso, altura
    CALC IMC = PESO / (ALTURA)²
    OUTPUT condição Abaixo do peso, Peso normal, Acima do peso e Obeso

    ------Tabela IMC-------
    abaixo de 18,5          Abaixo do peso
    Entre 18,5 e 25         Peso Normal
    Entre 25 e 30           Acima do peso
    Acima de 30             Obeso
    */
void main(){
   float peso, altura, IMC;
   printf("\n--Calculo de IMC--\n");

   printf("\nDigite seu peso: \n");
   scanf("%f", &peso);
   printf("\nDigite sua altura: \n");
   scanf("%f", &altura);

   IMC = peso / (altura*altura);
   printf("\nseu imc e: %.1f\n", IMC);

   if (IMC < 18.5f)
   {
       printf("\nVoce esta Abaixo do peso!\n");
   }
   else if (IMC >= 18.5f && IMC < 25.0f)
   {
       printf("\nVoce esta com o Peso Normal!\n");
   }
   else if (IMC >= 25.0f && IMC < 30.0f)
   {
       printf("\nVoce esta Acima do peso!\n");
   }
   else
   {
       printf("\nVoce esta Obeso!\n");
   }
}