#include <stdio.h>
#include <stdlib.h>

int searchNum(int* array, int len, int value) {
    for(int i = 0; i < len; ++i) {
        if(array[i] == value)
            return i;
    }
    return -1;
}

float mean(int* array, int len) {
    float sum = 0;
    for(int i = 0; i < len; ++i) {
        sum += array[i];
    }
    return sum / len;
}

char** initArray(char** array, const int row, const int col) {
    array = (char**) calloc(sizeof(char*), row);
    for(int i = 0; i < row; ++i) {
        *(array + i) = (char*) calloc(sizeof(char), col);
    }
    return array;
}

void fillArray(char** array, const int row, const int col) {
    for(int i = 0; i < row; ++i) {
        for(int j = 0; j < col; ++j) {
            *((*(array + i)) + j) = '*';
        }
    }
}

void printArray(char** array, const int row, const int col) {
    for(int i = 0; i < row; ++i) {
        for(int j = 0; j < col; ++j) {
            printf("[%c]", *((*(array + i)) + j));
        }
        printf("\n");
    }
}

void fillDecArray(char** array, const int row, const int col) {
    for(int i = 0; i < row; ++i) {
        for(int j = 0; j < col; ++j) {
            *((*(array + i)) + j) = (i + 1) * (j + 1);
        }
    }
}

void printDecArray(char** array, const int row, const int col) {
    for(int i = 0; i < row; ++i) {
        for(int j = 0; j < col; ++j) {
            printf("%4d", *((*(array + i)) + j));
        }
        printf("\n");
    }
}

void changeCoil(char** array, int row, int col, int from, int to) {
    char temp;
    for(int i = 0; i < row; ++i) {
        temp = *((*(array + i)) + from);
        *((*(array + i)) + from) = *((*(array + i)) + to);
        *((*(array + i)) + to) = temp;
    }
}

int main(int argc, char** args) {
    int a[10] = {1,2,3,4,5,6,7,8,9,0};
    int b[10] = {0};
    int c[] = {0,1,2,3,4,5};
    int d[10];
    d[0] = 10;
    d[1] = 20;
    d[2] = 30;
    for(int i = 3; i< 9; ++i) {
        d[i] = (i + 1) * 10;
    }

    printf("Index of  5 in a: %d\n", searchNum(a, 10, 5));
    printf("Index of 21 in d: %d\n", searchNum(d, 10, 21));
    printf("Mean of c: %f\n", mean(c, 6));

    const int row = 3;
    const int col = 5;
    char** arr = initArray(arr, row, col);
    fillArray(arr, row, col);
    printArray(arr, row, col);

    const int row2 = 10;
    const int col2 = 10;
    char** arr2 = initArray(arr2, row2, col2);
    fillDecArray(arr2, row2, col2);
    printDecArray(arr2, row2, col2);

    printf("\n");
    changeCoil(arr2, row2, col2, 2, 8);
    printDecArray(arr2, row2, col2);

    return 0;
}