#include <stdlib.h>

/*
Escreva um programa que determine o maior valor de um vetor bem como sua posição no
vetor (índice). Tal processamento deve ser feito em uma função que recebe o vetor (do
tipo float) e sua capacidade, e “retorna” o maior elemento e sua posição
*/

void maiorValorDoVetor(float *vetor, int tamanhoDoVetor, float *maiorValor, int *indiceDoMaiorValor) {
    *maiorValor = vetor[0];
    for (int i = 0; i < tamanhoDoVetor; i++) {
        if (vetor[i] > *maiorValor) {
            *maiorValor = vetor[i];
            *indiceDoMaiorValor = i;
        }
    }

};

void main() {
    int tamanhoDoVetor, indiceDoMaiorValor;
    float maiorValor;
    
    printf("Defina o tamanho do vetor: ");
    scanf("%d", &tamanhoDoVetor);

    float vetor[tamanhoDoVetor];

    printf("Popule o vetor: \n");

    for (int i = 0; i < tamanhoDoVetor; i++) {
        printf("#%d: ", i);
        scanf("%f", &vetor[i]);
    }

    maiorValorDoVetor(vetor, tamanhoDoVetor, &maiorValor, &indiceDoMaiorValor);

    printf("Maior valor: %.2f - Indice: #%d", maiorValor, indiceDoMaiorValor);



}