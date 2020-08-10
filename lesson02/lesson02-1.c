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

int euclidusFast(int a, int b) {
    int c;
    while(b) {
        c = a % b;
        a = b;
        b = c;
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
    printf("NOD = %d\n", euclidusFast(a, b));
 
    return 0;
}