#include <stdlib.h>

typedef struct {
 int codigo;
 char descricao[20];
 float preco;
} Produto;

void printarVetor(Produto *lista, int quantidadeDeProdutos) {
    printf("\n----------Lista de Produtos----------\n");
    for (int i = 0; i < quantidadeDeProdutos; i++) {
        printf("\n %d - %s - R$%.2f", lista[i].codigo, lista[i].descricao, lista[i].preco);
    }
    
};

void preencherVetor(Produto *lista, int quantidadeDeProdutos) {
    for (int i = 0; i < quantidadeDeProdutos; i++) {
        printf("\nCodigo do produto: ");
        scanf("%d", &lista[i].codigo);

        printf("Descricao: ");
        scanf("%s", lista[i].descricao);
        
        printf("Preco: R$");
        scanf("%f", &lista[i].preco);
    }
};

// Main

void main() {
    int quantidadeDeProdutos;

    printf("Quantidade de produtos desejados: ");
    scanf("%d", &quantidadeDeProdutos);

    Produto *listaDeProdutos = malloc(sizeof(Produto) * quantidadeDeProdutos);

    preencherVetor(&listaDeProdutos, quantidadeDeProdutos);    
    printarVetor(&listaDeProdutos, quantidadeDeProdutos);

    free(listaDeProdutos);
}
