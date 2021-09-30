#include <stdio.h>

void printArray(int sorted_array[], int size) {
    for (int i = 0; i < size; i++)
        printf("%d ", sorted_array[i]);
    printf("\n");
}

void append_value (int *slot, int value, int *index) {
    *slot = value;
    *index += 1;
}

void merge (int left_array[], int left_size, int right_array[], int right_size) {
    int sorted_array[left_size + right_size];
    int left_index = 0;
    int right_index = 0;

    for (int current_index = 0; current_index < left_size + right_size; current_index++) {
        if (left_index < left_size) {
            if (right_index < right_size) {
                if (left_array[left_index] < right_array[right_index])
                    append_value (&sorted_array[current_index], left_array[left_index], &left_index);
                else
                    append_value (&sorted_array[current_index], right_array[right_index], &right_index);
            } else
                append_value (&sorted_array[current_index], left_array[left_index], &left_index);
        }else {
            if (right_index < right_size)
                append_value (&sorted_array[current_index], right_array[right_index], &right_index);
        }    
    }

    printArray(sorted_array, left_size + right_size);
}

void main () {
    int left_array[9] = {1, 4, 7, 12, 15, 45, 98, 112, 300};
    int right_array[5] = {3, 8, 13, 16, 19};
    merge(left_array, 9, right_array, 5);
}




















    // while (current_index < left_size + right_size) {
    //     if (left_index < left_size) {
    //         if (right_index < right_size) {
    //             if (left_array[left_index] < right_array[right_index])
    //                 append_value (&sorted_array[current_index], left_array[left_index], &current_index, &left_index);
    //             else
    //                 append_value (&sorted_array[current_index], right_array[right_index], &current_index, &right_index);
    //         } else
    //             append_value (&sorted_array[current_index], left_array[left_index], &current_index, &left_index);       
    //     } else {
    //         if (right_index < right_size)
    //             append_value (&sorted_array[current_index], right_array[right_index], &current_index, &right_index);
    //     }
    // }



// void merge (int left_array[], int left_size, int right_array[], int right_size) {
//     int sorted_array[left_size + right_size];
//     int left_index = 0;
//     int right_index = 0;
//     int current_index = 0;
//     while (left_index < left_size && right_index < right_size) {
//         if (left_array[left_index] < right_array[right_index])
//             append_value (&sorted_array[current_index], left_array[left_index], &current_index, &left_index);
//         else
//             append_value (&sorted_array[current_index], right_array[right_index], &current_index, &right_index);
//     }

//     while (left_index < left_size)
//         append_value (&sorted_array[current_index], left_array[left_index], &current_index, &left_index);

//     while (right_index < right_size)
//         append_value (&sorted_array[current_index], right_array[right_index], &current_index, &right_index);

//     printArray(sorted_array, left_size + right_size);
// }