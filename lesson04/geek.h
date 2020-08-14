#ifndef GB_DSA_C_GEEK_H
#define GB_DSA_C_GEEK_H

#include <stdio.h>
#include <stdlib.h>
#include "geek.c"

void printIntArray(int* array, int size, int offset);
void print2dIntArray(int** array, const int row, const int col, int offset);

int** init2dIntArray(const int row, const int col);

void fillIntRandom(int* arr, int len, int border);
void fill2dIntArray(int** array, const int row, const int col);
void fill2dIntArrayRandom(int** array, const int row, const int col, int border);

int get2dInt(int** array, const int row, const int col);
void set2dInt(int** array, const int row, const int col, int value);

void swapInt(int *a, int *b);

void bubbleSort(int* arr, int len);
void shakerSort(int* arr, int len);
void sortInserts(int* arr, int len);
void sortSelection(int* arr, int len);

int linearSearch(int* arr, int len, int value);
int bareerSearch(int* arr, int len, int value);
int binarySearch(int* arr, int len, int value);
int searchInter(int* arr, int len, int value);

//void indexToRowCol(int row, int col, int index, int *r, int *c);
//void bubble2dSort(int** array, int row, int col);

#endif