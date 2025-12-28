#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    char *lugares[] = {
        "Comida Japonesa",
        "Churrascaria",
        "Frutos do Mar",
        "Cafeteria",
        "Picnic no Parque",
        "Hamburgueria"};

    int total = sizeof(lugares) / sizeof(lugares[0]);

    srand(time(NULL));

    int sorteio = rand() % total;

    printf("Nosso roteiro hoje vai ser: %s\n", lugares[sorteio]);

    return 0;
}
