//
// Created by wiju on 09.11.2024.
//

#include <stdio.h>

float negate(float s);

int main() {
    float a = 1.0f;
    printf("%.2f", negate(a));
}

float negate(float s) {
    unsigned int *ps = (unsigned int *) &s; //so i can use bit operations
    *ps ^= 1 << 31; //XOR the 31 bit with 1
    return s;
}
