//#include <stdio.h>
#include <stdlib.h>
char *mx_strjoin(char const *s1, char const *s2);
void mx_strdel(char **str);
char *mx_strcat(char *s1, const char *s2);
char *mx_strcpy(char *dst, const char *src);
int mx_strlen(const char *s);
char *mx_strnew(const int size);
char *mx_strdup(const char *str);

char *mx_concat_words(char **words) {
    
    int i =0;
    char *stroka = NULL;
    char *buff = NULL;
    char *dupwords = NULL;

    while (words[i] != NULL) {
        dupwords = mx_strdup(words[i]);
        stroka =  mx_strjoin(buff, dupwords);
        free(buff);
        if (!words[i + 1]) {
            buff = mx_strjoin(stroka, "\0");
        }
        else {
            buff = mx_strjoin(stroka, " ");
        }
        free(stroka);
        free(dupwords);
        i++;
    }
    return buff;
}
// int main() {
//     char *words[]= {"Free", "your", "mind.", NULL};
//     char *qwert = mx_concat_words(words);
//     printf("%s",qwert);
//    // system("leaks -q a.out");
// }
