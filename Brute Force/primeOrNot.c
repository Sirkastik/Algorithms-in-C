// Algorithm to find out if a number is prime using Brute Force
#include <stdio.h>
#include <stdbool.h>

// It divides the number by every other number before it and checking if divisible
bool checkPrime (unsigned int number) {
    if (number == 0)
        return false; //not prime
    if (number == 1 || number == 2)
        return true; //prime
    for (int divisor = 2; divisor < number; divisor++) {
        if (number % divisor == 0)
            return false; //not prime
    }
    return true; //prime
}

void main () {
    unsigned int number;
    // Take user input
    printf("\n Enter a positive number to check if prime or not : ");
    scanf("%d", &number);

    // print if is prime or not
    printf("%d : ", number);
    checkPrime(number) ? printf("IS a prime number.") : printf("IS NOT a prime number.");
}