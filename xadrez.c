#include <stdio.h>

int main() {
    // Movimento da Torre: 5 casas para a direita
    int casasTorre = 5;
    printf("Movimento da Torre:\n");
    for (int i = 0; i < casasTorre; i++) {
        printf("Direita\n");
    }

    // Movimento do Bispo: 5 casas na diagonal (cima e direita)
    int casasBispo = 5;
    int i = 0;
    printf("\nMovimento do Bispo:\n");
    while (i < casasBispo) {
        printf("Cima Direita\n");
        i++;
    }

    // Movimento da Rainha: 8 casas para a esquerda
    int casasRainha = 8;
    int contador = 0;
    printf("\nMovimento da Rainha:\n");
    do {
        printf("Esquerda\n");
        contador++;
    } while (contador < casasRainha);

    return 0;
}
