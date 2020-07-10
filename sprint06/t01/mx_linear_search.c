//#include <stdio.h>
int mx_strcmp(const char *s1, const char *s2);
int mx_linear_search(char **arr, const char *s) {
    int count = 0;

    while (arr[count] != NULL) {
        if (mx_strcmp(arr[count], s) == 0) {
            return count;
        }
        count++;
    }
    return -1;
}

// int main() {
//     char *arr[] = {"222", "Abcd", "aBc",  "ab", "az", "z"};
//     //printf("%d\n", mx_linear_search(arr, NULL));
//     printf("%d\n", mx_linear_search(arr, "aBc"));
// }

