// #include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
char *mx_strtrim(const char *str);
bool mx_isspace(char c);
char* mx_strncpy(char *dst, const char *src, int len);
char *mx_strnew(const int size);
void mx_strdel(char **str);
int mx_strlen(const char *s);

char *mx_del_extra_whitespaces(const char *str) {
    char *newstr = mx_strtrim(str);
    int i, j = 0;
    char *finstr = mx_strnew(mx_strlen(newstr));
    for(i = 0; i < mx_strlen(newstr) + j; i++) {
        if(mx_isspace(newstr[i])) {
            if(mx_isspace(newstr[i+1])) {
                j++;
            }
            else {
                finstr[i-j] = newstr[i];
            }
        }
        else {
            finstr[i-j] = newstr[i];
        }
    }
    free(newstr);
    return finstr;
}

// int main() {
//     char name[] =   "\f My name...  is  \r Neo   \t\n";
//     char *str = mx_del_extra_whitespaces(name);
//     printf("%s", str);
//     //system("leaks -q a.out");
// }
