#include <stdio.h>

int main() {
    int num1 = 12, num2 = 4;
    char op = '*';  // change cette valeur pour tester (+, -, *, /, %, &, |, ~)

    printf("num1 = %d, num2 = %d, opérateur = %c\n", num1, num2, op);

    switch (op) {
        case '+':
            printf("Résultat : %d\n", num1 + num2);
            break;
        case '-':
            printf("Résultat : %d\n", num1 - num2);
            break;
        case '*':
            printf("Résultat : %d\n", num1 * num2);
            break;
        case '/':
            if (num2 != 0)
                printf("Résultat : %d\n", num1 / num2);
            else
                printf("Erreur : division par zéro !\n");
            break;
        case '%':
            if (num2 != 0)
                printf("Résultat : %d\n", num1 % num2);
            else
                printf("Erreur : division par zéro !\n");
            break;
        case '&':
            printf("Résultat (ET bit à bit) : %d\n", num1 & num2);
            break;
        case '|':
            printf("Résultat (OU bit à bit) : %d\n", num1 | num2);
            break;
        case '~':
            printf("Résultat (~num1) : %d, (~num2) : %d\n", ~num1, ~num2);
            break;
        default:
            printf("Erreur : opérateur inconnu '%c'\n", op);
    }

    return 0;
}


