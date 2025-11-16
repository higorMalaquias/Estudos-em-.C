#include <stdio.h>

float mediaNumeros(int num[], int tamanho)
{
    int soma = 0;

    for (int i = 0; i < tamanho; i++)
    {
        soma += num[i];
    }

    return (float)soma / tamanho;
}

int main()
{
    int numeros[] = {-1, 4, -4, -7, 8, 9, -10, 2, 11, 10};
    int tamanho = sizeof(numeros) / sizeof(numeros[0]);

    float media = mediaNumeros(numeros, tamanho);

    printf("A media dos numeros: %.2f\n", media);

    return 0;
}
