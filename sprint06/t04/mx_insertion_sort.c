//#include <stdio.h>
int mx_strlen(const char *s);

int mx_insertion_sort(char **arr, int size) {
    int count = 0;
    for (int i =0; i < size; i++) {
        for (int j = i; j > 0; j--) {
            while(mx_strlen(arr[j]) < mx_strlen(arr[j-1])) {
                char *buff = arr[j];
                arr[j] = arr[j-1];
                arr[j-1] = buff;
                count++;   
            }
        }
    }
    return count;
}
  
// int main() {
//     char *arr[] = {"abc", "ab", "aaaaa", "aaaa", "aaa"};
//     printf("%d", mx_insertion_sort(arr, 5));
// }
