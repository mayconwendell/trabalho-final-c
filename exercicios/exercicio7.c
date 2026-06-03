#include <stdio.h>

int main() {
    int n, i;
    int jovens = 0, adultos = 0, idosos = 0;

    printf("Digite a quantidade de pessoas entrevistadas: ");
    scanf("%d", &n);

    int idades[n];

    for (i = 0; i < n; i++) {
        printf("Digite a idade da pessoa %d: ", i + 1);
        scanf("%d", &idades[i]);

        if (idades[i] >= 18 && idades[i] < 35) {
            jovens++;
        } else if (idades[i] >= 35 && idades[i] < 65) {
            adultos++;
        } else if (idades[i] >= 65) {
            idosos++;
        }
    }

    printf("\nQuantidade de jovens: %d\n", jovens);
    printf("Quantidade de adultos: %d\n", adultos);
    printf("Quantidade de idosos: %d\n", idosos);

    return 0;
}