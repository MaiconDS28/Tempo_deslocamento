#include <stdio.h>

int main() {

    printf("=================================\n");
    printf("      Tempo de Deslocamento      \n");
    printf("=================================\n\n");


    // Vetor com os tempos de chegada de 10 ônibus (em minutos)
    int tempos[10] = {15, 8, 22, 10, 5, 18, 30, 12, 25, 7};
    int i, j, aux;

    // Exibir dados originais
    printf("=== Tempos originais de chegada dos onibus (em minutos) ===\n");
    for (i = 0; i < 10; i++) {
        printf("%d ", tempos[i]);
    }
    printf("\n\n");

    // -----------------------------
    // ORDENACAO CRESCENTE (Bubble Sort)
    // -----------------------------
    for (i = 0; i < 10 - 1; i++) {
        for (j = 0; j < 10 - 1 - i; j++) {
            if (tempos[j] > tempos[j + 1]) {
                // Troca os valores vizinhos fora de ordem
                aux = tempos[j];
                tempos[j] = tempos[j + 1];
                tempos[j + 1] = aux;
            }
        }
    }

    printf("=== Tempos em ordem CRESCENTE (do menor para o maior) ===\n");
    for (i = 0; i < 10; i++) {
        printf("%d ", tempos[i]);
    }
    printf("\n\n");

    // -----------------------------
    // ORDENACAO DECRESCENTE (Bubble Sort)
    // -----------------------------
    for (i = 0; i < 10 - 1; i++) {
        for (j = 0; j < 10 - 1 - i; j++) {
            if (tempos[j] < tempos[j + 1]) {
                // Troca os valores vizinhos fora de ordem
                aux = tempos[j];
                tempos[j] = tempos[j + 1];
                tempos[j + 1] = aux;
            }
        }
    }

    printf("=== Tempos em ordem DECRESCENTE (do maior para o menor) ===\n");
    for (i = 0; i < 10; i++) {
        printf("%d ", tempos[i]);
    }
    printf("\n");

    return 0;
}