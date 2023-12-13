#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
#include <time.h>

struct dados_produto
{
    char nome[300];
    float preco;
    int stock;
};

void atualizacaostock(int stock, float preco, int quantProduto)
{
    int stockAtualizado;
    float precoAtualizado;
    stockAtualizado = stock-quantProduto;
    precoAtualizado =  preco * stockAtualizado;
    printf("Stock atualizado: %d \n",stockAtualizado);
    printf("Preço total no stock: %.1f \n",precoAtualizado);
}

int main()
{
    int opcao, escolha, quantProduto;
    float produtoValor;
    char produtoNome[300];

    struct dados_produto produto;

    printf("Deseja registrar um novo produto?\n");
    printf("1 - Sim.\n");
    printf("2 - Não.\n");
    scanf("%i", &escolha);

    system("cls||clear");

    switch (opcao)
    {
    case 1:

        fflush(stdin);
        printf("Registre o produto.\n");
        printf("Nome: ");
        gets(produto.nome);

        printf("Preço: ");
        scanf("%f", &produto.preco);

        fflush(stdin);

        printf("Quantidade em estoque: ");
        scanf("%i", &produto.stock);

        printf("Registro terminado!");

        system("cls||clear");

        break;

    default:
        break;
    }

    do
    {
        printf("Loja\n");
        printf("1 - Compra\n");
        printf("2 - Consultar stock\n");
        printf("3 - Sair:\n");
        printf("Resposta: ");
        scanf("%i", &opcao);

        system("cls||clear");

        fflush(stdin);

        switch (opcao)
        {
        case 1:
            fflush(stdin);

            printf("Nome do produto: \n");
            gets(produtoNome);

            printf("Digite o preco do produto: ");
            scanf("%f", &produtoValor);

            printf("Quantidade dos produtos: ");
            scanf("%d", &quantProduto);

            if (quantProduto <= produto.estoque)
            {
                printf("Compra realizada!\n");
            }
            else
            {
                printf("Sem stock suficiente.\n");
            }

            break;

        case 2:

            printf("Produto no estoque.");
            printf("\n");
            printf("Nome: %s \n", produto.nome);
            atualizarstock(produto.stock, produto.preco, quantProduto);

            break;

        default:
            break;
        }

    } while (opcao != 3);

    return 0;
}