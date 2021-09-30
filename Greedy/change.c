// Greedy algorithm implemented to solve the change problem
#include <stdio.h>

void printArray(int changeArr[], int denominations[], int size) {
    for (int i = 0; i < size; i++) {
        if (changeArr[i] > 0)
            printf("%d : %d \n", denominations[i], changeArr[i]);
    }
}

// findLargest finds the largest denomination as change for every iteration
int findLargest(int *balance, int denominations[], int size) {
    for (int index = 0; index < size; index++) {
        if (denominations[index] <= *balance) {
            *balance -= denominations[index];
            return index;
        }
    }
}

// getChange recursively gets change, stores it in an array and prints it
void getChange(int *balance, int changeArr[]) {
    int denominations[] = {1000, 500, 200, 100, 50, 20, 10, 5, 1};
    int size = sizeof(denominations) / sizeof(denominations[0]);
    int index = findLargest(balance, denominations, size);
    changeArr[index] += 1;
    if (*balance > 0)
        getChange(balance, changeArr);
    else
        printArray(changeArr, denominations, size);
}

void main() {
    int balance;
    int changeArr[] = {0, 0, 0, 0, 0, 0, 0, 0, 0};

    // Take user input
    printf("\n Enter balance to get change : ");
    scanf("%d", &balance);

    printf("Your change for %d is : \n", balance);
    getChange(&balance, changeArr);
}