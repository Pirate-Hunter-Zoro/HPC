#include <stdio.h>
#include <stdlib.h>

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

int pow_rec(int x, int p) {
    if (p == 0) {
        return 1;
    } else {
        return x * pow_rec(x, p-1);
    }
}

int pow_iter(int x, int p) {
    int result = 1;
    for (int i=1; i<=p; i++) {
        result *= x;
    }
    return result;
}

int pow_rec_quick(int x, int p) {
    if (p == 0) {
        return 1;
    } else {
        int new_p = p/2;
        int square_root = pow_rec_quick(x, new_p);
        int result = square_root * square_root;
        if (p % 2) {
            // Odd power
            result *= x;
        }
        return result;
    }
}

int pow_iter_quick(int x, int p) {
    int result = 1;
    int base = x;
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

int main(int argc, char** argv) {
    printf("2 to the 10th power: %d\n", pow_iter(2, 10));
    printf("2 to the 10th power: %d\n", pow_rec(2, 10));
    printf("2 to the 10th power: %d\n", pow_rec_quick(2, 10));
    printf("2 to the 10th power: %d\n", pow_iter_quick(2, 10));

    return 0;
}