//
// Created by wiju on 09.11.2024.
//

#include <stdio.h>

float negate(float s) {
    unsigned int *ps = (unsigned int *)&s; //so i can use bit operations
    *ps ^= 1 << 31; //XOR the 31 bit with 1
    return s;
}

int main() {
    /*
    int s = 0, k, n = 10; // choose some value here
    for(k = n; k != 0; k >>= 1) {
        s += (k&1);
        printf("%u\n", k);
    };
    printf("s:%u\n", s);
*/
    char c ='B'; //conversion to char
    short s = 1; //conversion to short
    unsigned int ui = 10; //conversion to unsigned int
    c !='X'; //its an check if the integer value of those two chars isnt ident which is true
    printf(c + s); // both get converted into an integer to add them together
    printf(ui > s); //
    ui *= 2.0;

    return 0;

}