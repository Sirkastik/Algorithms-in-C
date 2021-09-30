// Algorithm to find out if a number is prime using Brute Force
#include <stdio.h>
#include <stdbool.h>

// Starting from 2, it divides the number by every other number before it incrementally
bool checkPrime (unsigned int number, int currentDivisor) {
    if (number == 0)
        return 0; //not prime
    if (number == 1 || number == 2)
        return 1; //prime
    
    if (currentDivisor == number - 1)
        return 1; //prime
    if (number % currentDivisor == 0)
        return 0; //not prime
    else
        return checkPrime(number, currentDivisor + 1);
}

void main () {
    unsigned int number;
    int start = 2;
    // Take user input
    printf("\n Enter a positive number to check if prime: ");
    scanf("%d", &number);

    // print if is prime
    printf("%d : ", number);
    checkPrime(number, start) ? printf("IS a prime number.") : printf("IS NOT a prime number.");
}