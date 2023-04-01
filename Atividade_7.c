#include <stdio.h>

int main() {

    int i, numero;
    float media = 0.0;

    for (i = 1; i <= 10; i++) {
        printf("Digite o %do numero: ", i);
        scanf("%d", &numero);

        printf("Metade do %do numero: %.1f\n", i, numero / 2.0);

        media += numero;
    }
    media /= 10;
    printf("Media dos numeros lidos: %.1f\n", media);
    return 0;
}