#ifndef GB_DSA_C_GEEK_H
#define GB_DSA_C_GEEK_H

#include <stdio.h>
#include <stdlib.h>

void printIntArray(int* array, int size, int offset);

int** init2dIntArray(int** array, const int row, const int col);

void print2dIntArray(int** array, const int row, const int col, int offset);

void fill2dIntArray(int** array, const int row, const int col);

int get2dInt(int** array, const int row, const int col);

void set2dInt(int** array, const int row, const int col, int value);

#endif