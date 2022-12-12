//
// Created by amrit on 12/10/2022.
//
#include <stdio.h>
#include <conio.h>


int main(){

    int a=23,b=45;
    int temp=0;

    temp = a;
    a = b;
    b = temp;

    printf("a = %d b = %d",a,b);

    a = a + b;
    b = a - b;
    a = a - b;

    printf("a = %d b = %d",a,b);

    return 0;
}