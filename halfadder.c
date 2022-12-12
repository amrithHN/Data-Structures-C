//
// Created by amrit on 12/10/2022.
//

#include <stdio.h>
// half adder s = a xor b , c = a and b

int main(){

    int a = 0xFA;
    int b = 0xFB;
    int S=0,C=0;

    S = a ^ b;
    C = a & b;

    printf("%#08X\n",a);
    printf("%#08X\n",b);
    printf("%#08X",S);
    printf("\n%#08X",C);


    return 0;
}