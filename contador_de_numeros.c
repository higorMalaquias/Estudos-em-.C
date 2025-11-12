#include <stdio.h>

int contaPares(int numeros[], int tamanho)
{

    int contador = 0;
    for (int i = 0; i < tamanho; i++)
    {
        if (numeros[i] % 2 == 0)
        {
            contador++;
        }
    }
    return contador;
}
int main()
{
    int numeros[] = {1, 2, 3, 4, 5, 6};
    int tamanho = sizeof(numeros) / sizeof(numeros[0]);

    int resultado = contaPares(numeros, tamanho);
    printf("Quantidade de numeros pares: %d\n", resultado);
    return 0;
}