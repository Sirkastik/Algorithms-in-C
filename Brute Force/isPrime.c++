#include <iostream>
using namespace std;

// Function to check if the number is prime
bool checkPrime(int number) {
    bool isPrime;
    if (number == 0)
        isPrime = false;
    else if (number == 1 || number == 2)
        isPrime = true;
    else {
        int divisor = 2;
        isPrime = true;
        while (divisor < number) {
            if (number % divisor == 0) {
                isPrime = false;
                divisor += number - divisor;
            }
            else
                divisor++;
        }
    }
    return isPrime;
} 

int main() {
    int number;
    cout << "Enter a number to check if is prime: ";
    cin >> number;
    cout << "Is "<< number << " prime? ";
    if(checkPrime(number) == true)
        cout << "Yes";
    else
        cout << "No";
    return 0;
}




























// bool isPrime(int number) {
//     bool isPrime;
//     // Function to check if the number is prime
//     if (number == 0)
//         isPrime = false;
//     else if (number == 1 || number == 2)
//         isPrime = true;
//     else {
//         int divisor = 2;
//         isPrime = true;
//         while (divisor < number) {
//             if (number % divisor == 0) {
//                 isPrime = false;
//                 divisor += number - divisor;
//             }
//             else
//                 divisor++;
//         }
//     }

//     return isPrime;
// }