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

int main(int argc, char** argv) {
    int *arr = (int *)calloc(5, sizeof(int));
    if (arr == NULL) {
        printf("Error allocating memory...");
        return 1;
    } else {
        for (int i=0; i<=4; i++) {
            arr[i] = i*10;
        }
        for (int i=0; i<=4; i++) {
            printf("Array value at index %d: %d\n", i, arr[i]);
        }
        free(arr);
        arr = NULL;
    }
    
    return 0;
}