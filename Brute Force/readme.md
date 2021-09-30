# Brute Force Algorithm

This is an algorithm checks if a number is prime by dividing it by every number before it starting from 2 incrementally

## **Steps :**

To check if number is prime :
1.  if (number == 0) : number is NOT prime
2.  if (number == 1 || number == 2) : number is prime
3.  divisor = 2
4.  if (number % divisor == 0) : number is prime; else divisor++
5.  if (divisor == number - 1) : number is not prime; else repeat step 2 recursively

---

## **Pseudo-code using for loop**

```
// Function to check whether number is prime
int checkPrime (int number) {
    if (number == 0)
        return 0;
    if (number == 1 || number == 2)
        return 1;
    for (int divisor = 2; divisor < number; divisor++) {
        if (number % divisor == 0)
            return 0;
    }
    return 1;
}

int isPrime = checkPrime(number);
// isPrime == 1 ? number is prime : number is NOT prime

```

## **Pseudo-code for Recursion**

```
// Recursive function to check whether number is prime
int checkPrime(int number, int currentDivisor) {
    if (number == 0)
        return 0;
    if (number == 1 || number == 2)
        return 1;
    if (currentDivisor == number - 1)
        return 1;
    if (number % currentDivisor == 0)
        return 0;
    else
        return checkPrime(number, currentDivisor + 1);
}

int start = 2;
int isPrime = checkPrime(number, start);
// isPrime == 1 ? number is prime : number is NOT prime

```