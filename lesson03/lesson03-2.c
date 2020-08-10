#include <stdio.h>

int fib(int n) {
    if(n == 0)
        return 0;
    if(n == 1)
        return 1;
    
    return fib(n - 1) + fib(n - 2);
}

int recFacrotial(int n) {
    if(n <= 0)
        return 1;
    
    return n * recFacrotial(n - 1);
}

int iterFactorial(int n) {
    if(n < 0)
        return -1;
        
    int result = 1;
    for(int i = 1; i <= n; ++i) {
        result *= i;
    }
    return result;
}

int main(int argc, char** args) {
    //for(int i = 0; i < 20; ++i) {
    //    printf("%d ", fib(i));
    //}

    int input;
    printf("Enter number:");
    scanf("%d", &input);
    //printf("%d\n", recFacrotial(input));
    printf("%d\n", iterFactorial(input));

    return 0;
}