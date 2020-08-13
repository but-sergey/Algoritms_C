//#include <stdio.h>
//#include <stdlib.h>

void printIntArray(int* array, int size, int offset) {
    char format[5];
    sprintf(format, "%%%dd", offset);

    for(int i = 0; i < size; ++i) {
        printf(format, *(array + i));
    }
    printf("\n");
}

int** init2dIntArray(int** array, const int row, const int col) {
    array = (int**) calloc(sizeof(int*), row);
    for(int i = 0; i < row; ++i) {
        *(array + i) = (int*) calloc(sizeof(int), col);
    }
    return array;
}

void print2dIntArray(int** array, const int row, const int col, int offset) {
    char format[5];
    sprintf(format, "%%%dd", offset);

    for(int i = 0; i < row; ++i) {
        for(int j = 0; j < col; ++j) {
            printf(format, *((*(array + i)) + j));
        }
        printf("\n");
    }
}

void fillIntRandom(int* arr, int len, int border) {
    for(int i = 0; i < len; ++i) {
        *(arr + i) = rand() % border;
    }
}

void fill2dIntArray(int** array, const int row, const int col) {
    for(int i = 0; i < row; ++i) {
        for(int j = 0; j < col; ++j) {
            *((*(array + i)) + j) = 0;
        }
    }
}

int get2dInt(int** array, const int row, const int col) {
    return *((*(array + row)) + col);
}

void set2dInt(int** array, const int row, const int col, int value) {
    *((*(array + row)) + col) = value;
}

void swapInt(int *a, int *b) {
    int t = *a;
    *a = *b;
    *b = t;
}
