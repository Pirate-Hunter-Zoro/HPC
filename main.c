#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>

struct Point {
    int x;
    int y;
};

int square(int x) {
    return x * x;
}

void swap_ints(int *a, int *b) {
    int tmp = *a;
    *a = *b;
    *b = tmp;
}

long long unsigned int pow_rec(long long unsigned int x, long long unsigned int p)
{
    if (p == 0) {
        return 1;
    } else {
        return x * pow_rec(x, p-1);
    }
}

long long unsigned int pow_iter(long long unsigned int x, long long unsigned int p)
{
    long long unsigned int result = 1;
    for (int i=1; i<=p; i++) {
        result *= x;
    }
    return result;
}

long long unsigned int pow_rec_quick(long long unsigned int x, long long unsigned int p)
{
    if (p == 0) {
        return 1;
    } else {
        long long unsigned int new_p = p/2;
        long long unsigned int half_power = pow_rec_quick(x, new_p);
        long long unsigned int result = half_power * half_power;
        if (p % 2) {
            // Odd power
            result *= x;
        }
        return result;
    }
}

long long unsigned int pow_iter_quick(long long unsigned int x, long long unsigned int p)
{
    long long unsigned int result = 1;
    long long unsigned int base = x;
    while (p > 0) {
        if (p % 2) {
            // Odd current exponent
            result *= base;
        } 
        base *= base;
        p /= 2;
    }
    return result;
}

void p(char x); // Declares existence of p
void q(char a); // Declares existence of q
void p(char x)
{           // p, x, q
    q(x);
    char y;
            // p, x, y, q
    char z;
}           // p, x, y, z, q

char z; // p, z

void q(char a)
{
    char b;
            // p, z, q, a, b
    {
        char c;
    }       // p, z, q, a, b, c

    char d;
}           // p, z, q, a, b, d

// gcc -Wall -g main.c -o main 
int main(int argc, char** argv) // How many arguments there are and the actual value - point to char pointer (array of arrays of characters)
{
    printf("Hello World\n");

    return 0;
}