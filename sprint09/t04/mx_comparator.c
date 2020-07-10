#include <stdbool.h>
// #include <stdio.h>

int mx_comparator(const int *arr, int size, int x, bool (*compare)(int, int)) {
    for (int i = 0; i < size; i++) {
        if (compare(arr[i], x)) {
            return i;
        }
    }
    return -1;
}
// bool equal_nums(int a, int b) { 
//         return a == b;
// }
//     bool (*compare)(int, int) = equal_nums;


// int main() {
//     int arr[]= {1, 2, 3, 4, 5};
//     // bool (*compare)(int, int) = equal_nums;
//     printf("%d  ", mx_comparator(arr, 5, 3, equal_nums)); //returns 2
//     printf("%d", mx_comparator(arr, 5, -1, equal_nums)); //returns -1
// }
