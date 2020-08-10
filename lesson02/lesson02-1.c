#include <stdio.h>

int euclidus(int a, int b) {
    while(a != b) {
        if(a > b) {
            a = a - b;
        } else {
            b = b - a;
        }
    }
    return a;
}

int main(int argc, char** args)
{
    int a;
    int b;
    printf("Input number A: ");
    scanf("%d", &a);
    printf("Input number B: ");
    scanf("%d", &b);
    printf("NOD = %d\n", euclidus(a, b));
 
    return 0;
}