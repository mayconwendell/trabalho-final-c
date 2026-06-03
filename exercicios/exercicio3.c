#include <stdio.h>

int main() {
    float litros, consumo, autonomia;

    printf("Litros no tanque: ");
    scanf("%f", &litros);

    printf("Consumo medio (km/l): ");
    scanf("%f", &consumo);

    autonomia = litros * consumo;

    printf("Autonomia: %.0f km\n", autonomia);

    return 0;
}