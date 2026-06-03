#include <stdio.h>

int main() {
    int numero, i;
    int quantidade = 0;

    for (i = 1; i <= 10; i++) {
        printf("Digite o %dº numero: ", i);
        scanf("%d", &numero);

        if (numero % 3 == 0 && numero % 5 == 0) {
            quantidade++;
        }
    }

    printf("Quantidade de numeros divisiveis por 3 e por 5 ao mesmo tempo: %d\n", quantidade);

    return 0;
}