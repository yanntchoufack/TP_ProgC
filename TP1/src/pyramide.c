#include <stdio.h>

int main() {
    int n = 5;  // hauteur de la pyramide

    for (int i = 1; i <= n; i++) {
        // Espaces avant les nombres
        for (int j = i; j < n; j++) {
            printf(" ");
        }

        // Nombres croissants
        for (int j = 1; j <= i; j++) {
            printf("%d", j);
        }

        // Nombres décroissants
        for (int j = i - 1; j >= 1; j--) {
            printf("%d", j);
        }

        printf("\n");
    }

    printf("Pyramide terminée.\n");
    return 0;
}

