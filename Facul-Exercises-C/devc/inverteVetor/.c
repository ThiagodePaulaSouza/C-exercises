#include <stdio.h>
int main() {
    int vetorA[20], vetorB[20];
    int i, j;
    printf("\nDigite um 20 numeros!\n");
    for(i = 0; i < 20; i++) 
	{
        scanf("%i", &vetorA[i]);
    }
	printf("\nO Resultado da Inversão foi: \n");
    for(i=0, j = 19; i<20 && j >= 0; i++, j-- ) 
	{
        vetorB[i] = vetorA[j];
        printf("\n%i", vetorB[i]);
    }
    return 0;
}
