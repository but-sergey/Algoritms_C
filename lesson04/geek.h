#ifndef GB_DSA_C_GEEK_H
#define GB_DSA_C_GEEK_H

#include <stdio.h>
#include <stdlib.h>
#include "geek.c"

void printIntArray(int* array, int size, int offset);

int** init2dIntArray(int** array, const int row, const int col);

void print2dIntArray(int** array, const int row, const int col, int offset);

void fillIntRandom(int* arr, int len, int border);

void fill2dIntArray(int** array, const int row, const int col);

int get2dInt(int** array, const int row, const int col);

void set2dInt(int** array, const int row, const int col, int value);

void swapInt(int *a, int *b);

#endif