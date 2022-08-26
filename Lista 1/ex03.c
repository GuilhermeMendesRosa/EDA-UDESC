#include <stdlib.h>

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