// Copyright 2022 NNTU-CS
#include <cstdint>
#include "alg.h"


double pown(double value, uint16_t n) {
    double result = 1;
    int k = 0;
    while (k < n) {
        result *= value;
        k++;
    }
    return result;
}

uint64_t fact(uint16_t n) {
    uint64_t result = 1;
    for (int k = 1; k <= n; ++k) {
        result *= k;
    }
    return result;
}

double calcItem(double x, uint16_t n) {
    double result = 1;
    result = pown(x, n) / fact(n);
    return result;
}

double expn(double x, uint16_t count) {
    double result = 0;
    for (uint16_t n = 0; n <= count; n++) {
        result += calcItem(x, n);
    }
    return result;
}

double sinn(double x, uint16_t count) {
    double result = 0;
    for (uint16_t n = 1; n <= count; n++) {
        result +=  pown(-1, n - 1) * calcItem(x, (2 * n - 1));
    }
    return result;
}

double cosn(double x, uint16_t count) {
    double result = 0;
    for (uint16_t n = 1; n <= count; n++) {
        result += pown(-1, n - 1) * calcItem(x, (2 * n - 2));
    }
    return result;
}
