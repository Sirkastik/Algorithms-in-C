// Algorithm that receives a base and an exponent and returns the base ^ exponent using Divide and Conquer
#include <stdio.h>

// function to find the power of the base to the exponent
int calc_result (int base, int exponent) {
    if (exponent == 0)
        return 1;
    else if (exponent == 1) 
        return base;
    else {
        if (exponent % 2 == 0)
            return calc_result(base, exponent / 2) * calc_result(base, exponent / 2);
        else
            return calc_result(base, exponent / 2) * calc_result(base, (exponent / 2) + 1);
    } 
}

void main () {
    int base, exponent;
    // take input from user
    printf("\n Enter a base : ");
    scanf("%d", &base);
    printf("Enter the exponent : ");
    scanf("%d", &exponent);

    // print base raised to exponent
    printf("\n %d ^ %d is : %d \n", base, exponent, calc_result(base, exponent));
}