#include <stdio.h>

int checkMatch (int text[], int pattern[], int start) {
    int m = 3;
    int max = 8;

    if (start > max)
        return 404;
    else {
        for (int index = 0; index < m; index++) {
            if (pattern[index] == text[start])
                start++;
            else
                return checkMatch(text, pattern, start++);
        }
        return start - m;
    }
}

void main() {
    int text[] = {0, 0, 0, 0, 0, 1, 0, 0, 1, 0};
    int pattern[] = {0, 1, 0};
    int start = 0;
    printf("The pattern starts from index : %d", checkMatch(text, pattern, start));
}