#include <assert.h>
#include <ctype.h>
#include <limits.h>
#include <math.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char* argv[argc+1]) { // another way to specify array of character arrays - equivalent to 'char** argv'
    // read program aguments for filename
    if (argc < 2) {
        puts("Must specify data file");
        return EXIT_FAILURE;
    }

    // open the file
    FILE* datafile = fopen(argv[1], "r");
    if (!datafile) {
        puts("Could not open file");
        return EXIT_FAILURE;
    }

    // read in the matrix dimensions (numrows x numcols)
    int numrows = 0;
    int numcols = 0;
    if (!fscanf(datafile, "%d %d", &numrows, &numcols)) {
        // returns how much it read
        puts("Could not read matrix dimensions");
        return EXIT_FAILURE;
    } 

    // read in each line of matrix data
    int matrix[numrows][numcols];
    for (int i=0; i<numrows; i++) {
        for (int j=0; j<numcols; j++) {
            if (!fscanf(datafile, "%d", &matrix[i][j])) {
                // read into our 2D matrix - if we fail to do so, we're done
                puts("Could not read matrix data");
                return EXIT_FAILURE;
            }
        }
    }

    // read in vector length
    int vector_length = 0;
    if (!fscanf(datafile, "%d", &vector_length)) {
        puts("Could not read vector length");
        return EXIT_FAILURE;
    }

    // read in vector data
    int vector[vector_length];
    for (int i=0; i<vector_length; i++) {
        if (!fscanf(datafile, "%d", &vector[i])) {
            puts("Could not read vector data");
            return EXIT_FAILURE;
        }
    }

    // close the file
    fclose(datafile);

    // read in each line of matrix data
    printf("Matrix dimensions: %d x %d\n", numrows, numcols);
    for (int i=0; i<numrows; i++) {
        for (int j=0; j<numcols; j++) {
            printf("%d ", matrix[i][j]);
        }
        puts(""); // new line
    }
    printf("Vector length: %d\n", vector_length);
    for (int i=0; i<vector_length; i++) {
        printf("%d ", vector[i]);
    }
    puts(""); // new line

    return EXIT_SUCCESS;
}
