#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
#include <time.h>

#define TAM 5

struct alunos
{
    char nome[300];
    char datanascimento[11];
};

float calculoMedia(float nota[])
{
    int i;
    float soma, media;
    for (i = 0; i < 2; i++)
    {
        soma += nota[i];
    }
    media = soma / 2;

    return media;
}

char *situacao(float media)
{
    char situacao[300];

    if (media > 7)
    {
        strcpy(situacao, "Aprovado");
    }
    else
    {
        strcpy(situacao, "Reprovado");
    }

    return situacao;
}

int main()
{
    float nota[2], mediaFinal;
    int i, j;

    struct estudantes estudantes[TAM];

    for (i = 0; i < TAM; i++)
    {
        printf("Digite seu nome: \n");
        gets(estudantes[i].nome);

        printf("Escreva a data de nascimento: (DD/MM/AAAA)\n");
        gets(estudantes[i].dataDeNascimento);

        for (j = 0; j < 2; j++)
        {
            printf("Sua %dª nota: \n", i + 1);
            scanf("%f", &nota[j]);
        }

        mediaFinal = calculoMedia(nota);

        printf("Sua média é: %.1f \n ", mediaFinal);
        printf("Situação: %s \n", situacao(mediaFinal));

        printf("\n");

        fflush(stdin);
    }

    return 0;
}