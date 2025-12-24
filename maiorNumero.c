#include <stdio.h>

int maiorNumero(int numeros[], int tamanho)
{
    int maior = numeros[0];
    for (int i = 1; i < tamanho; i++)
    {
        if (numeros[i] > maior)
        {
            maior = numeros[i];
        }
    }

    return maior;
}

int main()

{
    int numeros[] = {3, 7, 2, 9, 5};
    int tamanho = 5;

    int resultado = maiorNumero(numeros, tamanho);

    printf("O maior numero: %d\n", resultado);

    return 0;
}
