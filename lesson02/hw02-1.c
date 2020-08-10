#include <stdio.h>
#include <math.h>

int isPrime(int num)
{
    for(int i = 2; i < (int)sqrt(num); i++) {
        if(num % i == 0) {
            return 0;
        }
    }
    return 1;
}

int main(int argc, char** args)
{
    int num;
    printf("Enter number: ");
    scanf("%d", &num);

    printf("Number %d is %sprime.\n", num, isPrime(num) ? "" : "not ");

    return 0;
}