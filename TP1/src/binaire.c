#include <stdio.h>

int main() {
    unsigned int nombres[] = {0, 4096, 65536, 65535, 1024};
    int taille = 5;

    for (int k = 0; k < taille; k++) {
        unsigned int n = nombres[k];
        printf("Nombre : %u → Binaire : ", n);

        int i;
        int bits = sizeof(int) * 8;  // 32 bits sur la plupart des systèmes
        int started = 0;  // pour ignorer les zéros au début

        for (i = bits - 1; i >= 0; i--) {
            if (n & (1u << i)) {   // si le bit à la position i est 1
                printf("1");
                started = 1;
            } else if (started) {  // affiche les 0 seulement après le premier 1
                printf("0");
            }
        }

        if (!started)  // si le nombre est 0
            printf("0");

        printf("\n");
    }

    return 0;
}
