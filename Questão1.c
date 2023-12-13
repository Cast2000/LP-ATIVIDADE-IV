Questão 1.   
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
#include <time.h>

#define TAM 3

struct dados_usuario
{
    char nome[300];
    char telefone[10];
    char email[300];
};

char *verificacarDados(struct dados_usuario contato[], char *buscador)
{
    int i;

    for (i = 0; i < TAM; i++)
    {

        if (strcmp(contato[i].nome, buscador) == 0)
        {
            printf("O número escolhido é: %s \n", contato[i].telefone);
            break;
        }
        printf("\nContato inexistente.");
    }
}

int main()
{
    int i;
    char buscador[300];

    struct dados_pessoa contato[TAM];

    for (i = 0; i < TAM; i++)
    {
        printf("Escreva seu nome: \n");
        gets(contato[i].nome);

        printf("Escreva o seu telefone: \n");
        gets(contato[i].telefone);

        printf("Escreva seu e-mail: \n");
        gets(contato[i].email);

        printf("\n");
    }

    printf("Procurando contatos.\n");
    printf("Escreva um nome para ter acesso ao contato: ");
    gets(buscador);

    verificacarDados(contato,buscador);

    return 0;
}
