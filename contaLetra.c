#include <stdio.h>
#include <string.h>

int contaLetra(char palavra[], char letra) {
    int contador = 0;

    for (int i = 0; i < strlen(palavra); i++) {
        if (palavra[i] == letra) {
            contador++;
        }
    }

    return contador;
}

int main() {
    char palavra[50];
    char letra;

    printf("Digite uma palavra: ");
    scanf("%s", palavra);

    printf("Digite a letra a ser contada: ");
    scanf(" %c", &letra);

    int resultado = contaLetra(palavra, letra);
    printf("A letra '%c' aparece %d vez(es) em \"%s\".\n", letra, resultado, palavra);

    return 0;
}
