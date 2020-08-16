#include "geek.h"

void fillRandom(int* arr, int len, int border) {
    for(int i = 0; i < len; ++i) {
        *(arr + i) = rand() % border;
    }
}

void swap(int *a, int *b) {
    int t = *a;
    *a = *b;
    *b = t;
}

void bubbleSort(int* arr, int len) {
    for(int i = 0; i < len; ++i) {
        for(int j = 0; j < len - 1; ++j) {
            if(arr[j] > arr[j + 1]) {
                swap(&arr[j], &arr[j + 1]);
            }
        }
    }
}

void shakerSort(int* arr, int len) {
    int left = 1;
    int right = len - 1;
    while(left <= right) {
        int i;
        for(i = right; i >= left; --i) {
            if(arr[i - 1] > arr[i]) {
                swap(&arr[i], &arr[i - 1]);
            }
        }
        left++;
        for(i = left; i <= right; ++i) {
            if(arr[i - 1] > arr[i]) {
                swap(&arr[i], &arr[i - 1]);
            }
        }
        right--;
    }
}

int main(int argc, char** args) {
    const int SIZE = 100;
    int arr[SIZE];
    fillRandom(arr, SIZE, 100);
    printIntArray(arr, SIZE, 3);
    //bubbleSort(arr, SIZE);
    shakerSort(arr, SIZE);
    printIntArray(arr, SIZE, 3);

    return 0;
}