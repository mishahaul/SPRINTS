//#include <stdio.h>
int mx_popular_int(const int *arr, int size) {
    int res = arr [0];
    int max_count = 1;
    int count = 1;
    for (int i = 0; i < size-1; i++) {
        for (int j = i+1; j < size; j++){
            if (arr[i] == arr[j])
                count++;
            else {
                if (count > max_count) {
                max_count = count;
                res = arr[i];
                }
                count = 1;
            }
        }    
    }
    return res;
}  
/*int main() {
    int arr[] = {2, 3, 2, 2, 7, 4, 4};
    printf("%d", mx_popular_int(arr, 7));
}
*/
