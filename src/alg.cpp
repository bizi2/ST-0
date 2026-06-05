// Copyright 2024 Nazyrov A.A.

#include "alg.h"

uint64_t factorial(uint8_t n) {
    uint64_t result = 1;
    for (uint8_t i = 2; i <= n; ++i) {
        result *= i;
    }
    return result;
}
