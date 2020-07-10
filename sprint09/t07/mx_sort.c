#include <stdbool.h>
// #include <stdio.h>

void mx_sort(int *arr, int size, bool(*f)(int, int)) {
    for(int i = 0; i < size; i++){
        for(int j = i + 1; j < size; j++) {
            int buff = 0;
            if(f(arr[i], arr[j])) { 
                buff = arr[i];
                arr[i] = arr[j];
                arr[j] = buff;
            }
        }
    }
}

// bool compare(int a, int b) {
//     return a > b;
// }

// int main(){
//     int arr[]= {5, 4, 3, 2, 1};
//     bool (*sort)(int ,int) = compare;
//     mx_sort(arr, 5, sort); //array has become’{1, 2, 3, 4, 5}'
//     for(int i = 0; i < 5; i++){
//         printf("%d   ", arr[i]);
//     }
// }
