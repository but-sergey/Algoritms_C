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

int** init2dIntArray(const int row, const int col) {
    int** array = (int**) calloc(sizeof(int*), row);
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

void fill2dIntArrayRandom(int** array, const int row, const int col, int border) {
    for(int i = 0; i < row; ++i) {
        for(int j = 0; j < col; ++j) {
            *((*(array + i)) + j) = rand() % border;
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

void bubbleSort(int* arr, int len) {
    for(int i = 0; i < len; ++i) {
        for(int j = 0; j < len - 1; ++j) {
            if(arr[j] > arr[j + 1]) {
                swapInt(&arr[j], &arr[j + 1]);
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
                swapInt(&arr[i], &arr[i - 1]);
            }
        }
        left++;
        for(i = left; i <= right; ++i) {
            if(arr[i - 1] > arr[i]) {
                swapInt(&arr[i], &arr[i - 1]);
            }
        }
        right--;
    }
}

void sortInserts(int* arr, int len) {
    int temp, pos;
    for(int i = 1; i < len; ++i) {
        temp = arr[i];
        pos = i - 1;
        while(pos >= 0 && arr[pos] > temp) {
            arr[pos + 1] = arr[pos];
            pos--;
        }
        arr[pos + 1] = temp;
    }
}

void sortSelection(int* arr, int len) {
    int min;
    for(int i = 0; i < len - 1; ++i) {
        min = i;
        for(int j = i + 1; j < len; ++j) {
            if(arr[j] < arr[min]) {
                min = j;
            }
        }
        swapInt(&arr[i], &arr[min]);
    }
}

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
/*
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
*/