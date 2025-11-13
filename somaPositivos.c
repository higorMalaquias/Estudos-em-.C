#include <stdio.h>

int main()
{
    int numeros[] = {-1, 4, -4, -7, 8, 9, -10, 2, 11, 10};
    int tamanho = 10;
    int soma = 0;

    for (int i = 0; i < tamanho; i++)
    {

        if (numeros[i] > 0)
        {

            soma += numeros[i];
        }
    }

    printf("A soma dos numeros positivos: %d\n", soma);

    return 0;
}
