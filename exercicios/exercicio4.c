#include <stdio.h>

int main() {
    float largura, comprimento, area;

    printf("Digite a largura do terreno (m): ");
    scanf("%f", &largura);

    printf("Digite o comprimento do terreno (m): ");
    scanf("%f", &comprimento);

    area = largura * comprimento;

    printf("Area do terreno: %.2f m²\n", area);

    return 0;
}