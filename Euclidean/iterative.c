// Euclid's Algorithm implemented in C
#include <stdio.h>

// function to set num1 as the larger number
void set_larger(int *num1, int *num2) {
    if (*num2 > *num1) {
        int temp = *num1;
        *num1 = *num2;
        *num2 = temp;
    }
}

// function to calculate GCD
int calc_gcd(int dividend, int divisor) {
    while (divisor > 0) {
        int remainder = dividend % divisor;
        dividend = divisor;
        divisor = remainder;
    }
    return dividend;
}

void main() {
    int num1, num2;
    // take input from user
    printf("Enter two positive numbers to find GCD: \n");
    scanf("%d \n %d", &num1, &num2);

    // finds larger number and sets it as num1
    set_larger(&num1, &num2);

    //print the GCD
    printf("The GCD of %d and %d is : %d", num1, num2, calc_gcd(num1, num2));
}