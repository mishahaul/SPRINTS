#include <stdio.h>
#include "header.h"
//int mx_strcmp(const char *s1, const char *s2);
int mx_bubble_sort(char **arr, int size) {
    int count = 0;
    for (int i = 0; i < size-1; i++) {
        for (int j = i+1; j < size ; j++) {
            if (mx_strcmp(arr[i], arr[j]) > 0 ) {
                char *buff = arr[i];
                arr[i] = arr[j];
                arr[j] = buff;
                count++;
            }
        }
    }
    return count;
}
 int main() {
   // char *arr[] = {"abc", "xyz", "ghi", "def"};
    char *mas[] = {"abc", "acb", "a"};
    printf("%d", mx_bubble_sort(mas, 3));
 }

