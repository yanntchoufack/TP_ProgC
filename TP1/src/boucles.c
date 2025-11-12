#include <stdio.h>

int main() {
    int compteur = 5;  // tu peux changer la taille ici

    for (int i = 1; i <= compteur; i++) {
        for (int j = 1; j <= i; j++) {
            // si la ligne est paire → affiche "#", sinon "*"
            if (i % 2 == 0)
                printf("# ");
            else
                printf("* ");
        }
        printf("\n"); // passe à la ligne suivante
    }

    return 0;
}

