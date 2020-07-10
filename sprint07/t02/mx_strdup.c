//#include <stdio.h>
char *mx_strcpy(char *dst, const char *src);
int mx_strlen(const char *s);
char *mx_strnew(const int size);

char *mx_strdup(const char *str) {
    const int size = mx_strlen(str);
    char *dup = mx_strnew(size);
    dup = mx_strcpy(dup, str);
    return dup;
}

// int main() {
//     char arr[] = "hello world";
//     printf("%s", mx_strdup(arr));
// }
