#include <stdlib.h>

void encontrandoMaiorEMenor(int *vetor, int tamanhoDoVetor, int *min, int *max) {
    int maiorValor = vetor[0], menorValor = vetor[0];

    for (int index = 1; index < tamanhoDoVetor; index++) {
        if (vetor[index] > maiorValor) {
            maiorValor = vetor[index];
        }
        if (vetor[index] < menorValor) {
            menorValor = vetor[index];
        }

        *min = menorValor;
        *max = maiorValor;        
    }
};

void main() {
    int tamanhoDoVetor, max, min;
    printf("Tamanho do vetor: ");
    scanf("%d", &tamanhoDoVetor);

    int vetor[tamanhoDoVetor];

    printf("Populando o vetor: \n");
    for (int index = 0; index < tamanhoDoVetor; index++) {
        printf("%d#: ", index);
        scanf("%d", &vetor[index]);
    }

    encontrandoMaiorEMenor(vetor, tamanhoDoVetor, &min, &max);
    
    printf("Menor valor: %d - Maior valor: %d", min, max);
}
