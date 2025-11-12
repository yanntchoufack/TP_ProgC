#include <stdio.h>

int main() {
    // Déclaration et affectation des variables

    // Type char
    signed char c1 = -100;
    unsigned char c2 = 200;

    // Type short
    signed short s1 = -30000;
    unsigned short s2 = 60000;

    // Type int
    signed int i1 = -123456;
    unsigned int i2 = 123456U;

    // Type long int
    signed long int l1 = -123456789L;
    unsigned long int l2 = 123456789UL;

    // Type long long int
    signed long long int ll1 = -123456789012345LL;
    unsigned long long int ll2 = 123456789012345ULL;

    // Types flottants (pas de signed/unsigned)
    float f = 3.14F;
    double d = 2.718281828;
    long double ld = 1.6180339887L;

    // Affichage des valeurs
    printf("=== Affichage des variables de base ===\n\n");

    printf("signed char      : %d\n", c1);
    printf("unsigned char    : %u\n\n", c2);

    printf("signed short     : %d\n", s1);
    printf("unsigned short   : %u\n\n", s2);

    printf("signed int       : %d\n", i1);
    printf("unsigned int     : %u\n\n", i2);

    printf("signed long int  : %ld\n", l1);
    printf("unsigned long int: %lu\n\n", l2);

    printf("signed long long int  : %lld\n", ll1);
    printf("unsigned long long int: %llu\n\n", ll2);

    printf("float            : %.2f\n", f);
    printf("double           : %.9f\n", d);
    printf("long double      : %.10Lf\n", ld);

    return 0;
}
