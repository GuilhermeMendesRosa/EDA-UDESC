#include <stdlib.h>
#include <math.h>
void calculaCirculo(float raio, float *perimetro, float *area) {
    *perimetro = 2 * M_PI * raio;
    *area = M_PI * pow(raio, 2);
}

void main() {
    float raio, perimetro, area;

    printf("Raio do Circulo: ");
    scanf("%f", &raio);

    calculaCirculo(raio, &perimetro, &area);

    printf("Perimetro: %.2f - Area: %.2f", perimetro, area);
}