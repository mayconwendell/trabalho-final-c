#include <stdio.h>

int main() {
    int vetor[10];
    int referencia;
    int i, quantidade = 0;

    for (i = 0; i < 10; i++) {
        printf("Digite o %dº numero: ", i + 1);
        scanf("%d", &vetor[i]);
    }

    printf("Digite o valor de referencia: ");
    scanf("%d", &referencia);

    printf("\nNumeros maiores que o valor de referencia:\n");

    for (i = 0; i < 10; i++) {
        if (vetor[i] > referencia) {
            printf("%d ", vetor[i]);
        }

        if (vetor[i] == referencia) {
            quantidade++;
        }
    }

    printf("\n\nQuantidade de vezes que o valor de referencia aparece no vetor: %d\n", quantidade);

    return 0;
}