#include <stdio.h>
#include <stdbool.h>

bool mystery_algo(float A[], int n) {
    if (n == 1)
        return true;
    else {
        for (int i = 0; i <= n - 2; i++) {
            printf("\n");
            for (int j = i + 1; j <= n - 1; j++) {
                printf("%.1f ", A[i]);
                if (A[i] == A[j])
                    return false;
            }
        }
    }
    return true;
}

void main() {
    float arr[8] = {3.8, 7.7, 9.5, 8.6, 8.3, 7.9, 9.9, 3.5};
    mystery_algo(arr, 8) ? printf("\nTrue") : printf("\nFalse");
}