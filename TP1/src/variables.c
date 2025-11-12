#include <stdio.h>

int main() {
    signed char c = -100;          unsigned char uc = 200;
    signed short s = -30000;       unsigned short us = 60000;
    signed int i = -123456;        unsigned int ui = 123456U;
    signed long l = -123456789L;   unsigned long ul = 123456789UL;
    signed long long ll = -9876543210LL; unsigned long long ull = 9876543210ULL;
    float f = 3.14F; double d = 2.718281828; long double ld = 1.6180339887L;

    printf("signed char / unsigned char      : %d / %u\n", c, uc);
    printf("signed short / unsigned short    : %d / %u\n", s, us);
    printf("signed int / unsigned int        : %d / %u\n", i, ui);
    printf("signed long / unsigned long      : %ld / %lu\n", l, ul);
    printf("signed long long / unsigned long long : %lld / %llu\n", ll, ull);
    printf("float / double / long double     : %.2f / %.9f / %.10Lf\n", f, d, ld);

    return 0;
}
