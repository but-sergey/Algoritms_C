#include <stdio.h>
#include <string.h>

#define HEIGHT 8
#define WIDTH 8

int board[HEIGHT][WIDTH] = {
    { 0, 0, 0, 0, 0,-1, 0, 0},
    { 0,-1,-1,-1, 0, 0, 0, 0},
    { 0, 0,-1, 0, 0, 0, 0, 0},
    { 0, 0, 0, 0,-1,-1, 0, 0},
    { 0, 0, 0,-1, 0,-1, 0, 0},
    { 0, 0, 0, 0, 0, 0, 0, 0},
    {-1, 0, 0, 0, 0, 0,-1, 0},
    { 0, 0, 0, 0, 0, 0,-1, 0}
};

void decToBin(int num, char* result) {
    if(num <= 0) return;
    decToBin(num / 2, result);
    strcat(result, (num % 2 == 0) ? "0" : "1");
}

unsigned long long power(unsigned long long base, int exp) {
    if(exp <= 0) return 1;
    return base * power(base, exp - 1);
}

unsigned long long extPow(unsigned long long base, int exp) {
    if(exp <= 0) return 1;
    if(exp % 2 == 0) {
        return extPow(base * base, exp / 2);
    } else {
        return base * extPow(base, exp - 1);
    }
}

void printBoard() {
    for(int i = 0; i < HEIGHT; i++) {
        for(int j = 0; j < WIDTH; j++) {
            printf("%5d", board[i][j]);
        }
        printf("\n");
    }
}

int routes(int x, int y) {
    if(x == 0 && y == 0) {
        return 1;
    } else if(board[x][y] == -1) {
        return 0;
    } else if(x < 0 || y < 0) {
        return 0;
    } else {
        return routes(x - 1, y) + routes(x, y - 1);
    }
}

void calcRoutes() {
    for(int i = 0; i < HEIGHT; i++) {
        for(int j = 0; j < WIDTH; j++) {
            if(board[i][j] != -1) board[i][j] = routes(i, j);
        }
    }
}

int main(int argc, char** args) {
    printf("=== Task 01 ===\n");
    int decNum;
    char binNum[64] = "\0";
    printf("Enter decimal number: ");
    scanf("%d", &decNum);
    decToBin(decNum, binNum);
    printf("%d in binary format is %s\n", decNum, binNum);

    printf("\n=== Task 02 ===\n");
    int base;
    int exp;
    printf("Enter basis: ");
    scanf("%d", &base);
    printf("Enter exponent: ");
    scanf("%d", &exp);
    printf("Standard power: %d ^ %d = %llu\n", base, exp, power(base, exp));
    printf("Extended power: %d ^ %d = %llu\n", base, exp, extPow(base, exp));

    printf("\n=== Task 03 ===\n");

    printf("Map of obstacles:\n");
    printBoard();

    calcRoutes();
    
    printf("\nMap of routes:\n");
    printBoard();

    return 0;
}