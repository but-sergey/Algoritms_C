#include "geek.h"

void indexToRowCol(int row, int col, int index, int *r, int *c) {
    if((index < row * col) && (index >= 0)) {
        *r = index / col;
        *c = index % col;
    } else {
        *r = -1; *c = -1;
    }
}

void bubble2dSort(int** array, int row, int col) {
    int r1, c1;
    int r2, c2;
    for(int i = 0; i < row * col; i++) {
        for(int ind = 0; ind < row * col - i - 1; ind++) {
            indexToRowCol(row, col, ind, &r1, &c1);
            indexToRowCol(row, col, ind + 1, &r2, &c2);
            if(array[r1][c1] > array[r2][c2]){
                swapInt(&array[r1][c1], &array[r2][c2]);
            }
        }
    }
}

int main(int argc, char** args) {
    const int row = 5;
    const int col = 12;
    const int maxNum = 100;
    
    int** arr = init2dIntArray(row, col);
    fill2dIntArrayRandom(arr, row, col, maxNum);
    print2dIntArray(arr, row, col, 3);
    printf("\n");
    bubble2dSort(arr, row, col);
    print2dIntArray(arr, row, col, 3);
    
    return 0;
}