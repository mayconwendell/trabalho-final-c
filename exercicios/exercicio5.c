#include <stdio.h>

int main() {
    int n, i;
    int pares = 0, impares = 0;

    printf("Digite a quantidade de elementos do vetor: ");
    scanf("%d", &n);

    int vetor[n];

    for (i = 0; i < n; i++) {
        printf("Digite o elemento %d: ", i + 1);
        scanf("%d", &vetor[i]);
    }

    for (i = 0; i < n; i++) {
        if (vetor[i] % 2 == 0) {
            pares++;
        } else {
            impares++;
        }
    }

    printf("Quantidade de elementos pares: %d\n", pares);
    printf("Quantidade de elementos impares: %d\n", impares);

    return 0;
}