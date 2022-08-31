#include <stdlib.h>

/*
Escreva uma função que troca os valores entre duas variáveis do tipo float. Faça um
programa que leia duas variáveis e mostre seus valores na tela. Em seguida, troque os
valores (usando a função) e mostre novamente os valores.
*/

void inverteValor(float *ponteiroNumero1, float *ponteiroNumero2) {
    float auxiliar = *(ponteiroNumero1);
    *(ponteiroNumero1) = *(ponteiroNumero2);
    *(ponteiroNumero2) = auxiliar;
};

void main() {
    float num1, num2;

    printf("Digite o valor do numero 1:");
    scanf("%f", &num1);
    printf("Digite o valor do numero 2:");
    scanf("%f", &num2);

    inverteValor(&num1, &num2);
    printf("Numero 1: %f - Numero 2: %f", num1, num2);
}