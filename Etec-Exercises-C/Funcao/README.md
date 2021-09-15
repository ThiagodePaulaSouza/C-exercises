# 🤔Programa: Funcao em C

## 🤨 Resultado

![](https://s3.us-west-2.amazonaws.com/secure.notion-static.com/d9c7a146-a748-45d8-a121-ff905f65f735/exemploproreadme.png?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Credential=AKIAT73L2G45O3KS52Y5%2F20210915%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20210915T210600Z&X-Amz-Expires=86400&X-Amz-Signature=1f526a4b1172e7819fb8598e7afe0cea6c73255ab87a8b821aab8d411ed05aad&X-Amz-SignedHeaders=host&response-content-disposition=filename%20%3D%22exemploproreadme.PNG.png%22)

## 😬Código

```c
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
```
