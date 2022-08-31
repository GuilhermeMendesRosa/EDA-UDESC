#include <stdlib.h>

/*
Faça uma função que receba um parâmetro (por valor) com o total de minutos passados
ao longo do dia e receba também dois parâmetros (referência) no qual deve preencher
com o valor da hora e do minuto corrente. Faça um programa que leia do teclado quantos
minutos se passaram desde meia-noite e imprima a hora corrente (use a sua função).
*/

void relogio(int totalDeMinutos, int *hora, int *minuto) {
    *hora = totalDeMinutos / 60;
    *minuto = totalDeMinutos - (*(hora)*60);
}

void main() {
    int totalDeMinutos, hora, minuto;
    printf("Total de minutos: ");
    scanf("%d", &totalDeMinutos);
    if (totalDeMinutos > 1440) {
        printf("ERRO, limite de tempo atingido!");
        return 0;
    }

    relogio(totalDeMinutos, &hora, &minuto);

    printf("%.2d:%.2d", hora, minuto);
}