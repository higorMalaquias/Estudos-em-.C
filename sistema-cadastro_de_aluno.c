// Sistema de cadastro de alunos

#include <stdio.h>

int main()
{

    int opcao = 0;
    char nome[50];
    int idade = 0;
    float nota = 0.00;

    do
    {

        printf("\n*** SISTEMA DE CADASTRO DE ALUNOS ***\n");
        printf("1. Cadastrar aluno\n");
        printf("2. Listar alunos\n");
        printf("3. Buscar aluno\n");
        printf("4. Finalizar\n");
        printf("Selecione uma opcao: \n");
        scanf("%d", &opcao);

        switch (opcao)
        {
        case 1:
            printf("nome do aluno: \n");
            scanf("%s", nome);
            printf("idade: \n");
            scanf("%d", &idade);
            printf("nota: \n");
            scanf("%.2f", &nota);
            printf("Aluno %s cadastrado com sucesso!\n", nome);
            printf("Deseja cadastrar outro aluno? se sim selecione a 'opcao 1' novamente ou selecione outra opcao\n");
            break; /* */

        default:
            printf("opacao invalida... \n");
        }
    } while (opcao != 4);

    printf("finalizando...\n");

    return 0;
}