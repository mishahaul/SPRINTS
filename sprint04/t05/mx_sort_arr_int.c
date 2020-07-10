//#include <stdio.h>
void mx_sort_arr_int(int *arr, int size) {
    for (int i = 0; i < size-1; i++) {
        int j; 
        for (j = i+1; j < size; j++) {
            if (arr[i] > arr[j]) { 
                int temp = arr[i]; 
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
}
/*int main() {
    int arr[] = {7, 13, 3, 1};
    int len = 4;
    mx_sort_arr_int(arr, len);
    for (int i = 0; i < len; i++)
        printf("%d ", arr[i]);
}
*/
