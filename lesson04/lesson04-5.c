#include "geek.h"

int binarySearch(int* arr, int len, int value) {
    int l = 0;
    int r = len - 1;
    int mid = (l + r) / 2;

    while(l <= r && arr[mid] != value) {
        if(arr[mid] < value) {
            l = mid;
        } else {
            r = mid;
        }
        mid = (l + r) / 2;
    }

    if(arr[mid] == value){
        return mid;
    } else {
        return -1;
    }
}

int searchInter(int* arr, int len, int value) {
    int mid;
    int l = 0;
    int r = len - 1;

    while(arr[l] < value && arr[r] > value) {
        mid = l + ((value - arr[l]) * (r - l)) / (arr[r] - arr[l]);
        if(arr[mid] < value) {
            l = mid + 1;
        } else if(arr[mid] > value) {
            r = mid - 1;
        } else {
            return mid;
        }
    }

    if(arr[l] == value) {
        return l;
    } else if (arr[r] = value) {
        return r;
    } else {
        return -1;
    }
}

int main(int argc, char** args) {
    const int SZ = 30;
    int arr[SZ];
    fillIntRandom(arr, SZ, 100);
    printIntArray(arr, SZ, 3);
    sortInserts(arr, SZ);
    printIntArray(arr, SZ, 3);
    int num = 69;
    //printf("Number %d in array find at index: %d\n", num, binarySearch(arr, SZ, num));
    printf("Number %d in array find at index: %d\n", num, searchInter(arr, SZ, num));

    return 0;
}