#include "geek.h"

int linearSearch(int* arr, int len, int value) {
    int i = 0;
    while(i < len && arr[i] != value) {
        i++;
    }

    if(i < len) {
        return i;
    } else {
        return -1;
    }
}

int bareerSearch(int* arr, int len, int value) {
    int i = 0;
    while(arr[i] != value) {
        i++;
    }

    if(i < len - 1) {
        return i;
    } else {
        return -1;
    }
}

int main(int argc, char** args) {
    const int SIZE = 40;
    int arr[SIZE];
    fillIntRandom(arr, SIZE, 100);
    arr[SIZE - 1] = 98;
    printIntArray(arr, SIZE, 3);
    int num = 98;
    //printf("Number %d in array find at index: %d\n", num, linearSearch(arr, SIZE, num));
    printf("Number %d in array find at index: %d\n", num, bareerSearch(arr, SIZE, num));

    return 0;
}