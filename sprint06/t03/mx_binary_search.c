//#include <stdio.h>
int mx_strcmp(const char *s1, const char *s2);

int mx_binary_search(char **arr, int size, const char *s, int *count) {  
    int low = 0;
    int high = size -1;
    int mid;
    while (low <= high) {
        mid = (low + high)/2;
        ++*count;
        if (mx_strcmp(arr[mid], s) > 0){
            high = mid-1;
        }
        else if (mx_strcmp(arr[mid], s) < 0){
            low = mid+1;
        }
        else 
            return mid; 
    }
    *count = 0;
    return -1;
}
// int main () {
//     char *arr[]= {"222", "Abcd", "aBc", "ab", "az", "z"};
//      int count= 0;
//     printf("%d  count:    %d", mx_binary_search(arr, 6, "ab", &count), count);
// }
