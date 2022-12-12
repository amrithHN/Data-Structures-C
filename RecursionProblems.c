//
// Created by amrit on 12/10/2022.
//
#include <stdio.h>
#include <math.h>

int sum_of_n(int n) {

    if (n == 0)
        return 0;

    return (n + sum_of_n(--n));

}

int factorial(int n) {

    if (n == 1)
        return 1;
    return n * factorial(--n);
}

int sum_of_digits(int n) {

    if (n == 0)
        return 0;

    return n % 10 + sum_of_digits(n / 10);
}

int num_of_digits(int n) {
    int i = 0;
    while (n) {
        n = n / 10;
        i++;
    }
    return i;
}


int reverse_number(int n, int len) {

    if (n == 0)
        return 0;

    return ((n % 10) * pow(10, len)) + reverse_number(n / 10, --len);
}


int fibonacci(int n)
{
    if (n == 0)
        return 0;
    else if (n == 1)
        return 1;
    else
    return (fibonacci(n-1)+fibonacci(n-2));
}

int main() {

    printf("Sum of 10 numbers is:");
    printf("%d\n", sum_of_n(10));

    printf("Factorial of 10 numbers:");
    printf("%d\n", factorial(10));

    printf("Sum of digits of number 5847:");
    printf("%d\n", sum_of_digits(5847));


    printf("Reverse of  12345678:");
    printf("%d\n", reverse_number(12345678, 8));

    printf("Fibonacci of nth: ");
    printf("%d", fibonacci(5));

    return 0;
}