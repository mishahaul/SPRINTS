#include <stdio.h>
char *mx_strcpy(char *dst, const char *src);
int mx_strlen(const char *s);
char *mx_strnew(const int size);
char *mx_strcat(char *s1, const char *s2);
char *mx_strdup(const char *str);

char *mx_strjoin(char const *s1, char const *s2) {
    char *dups1; 
    char *dups2; 
    char *comb;

    if (s1 == NULL && s2 != NULL) {
        dups2 = mx_strdup(s2);
        return dups2;
    } 
    if (s1 != NULL && s2 == NULL) {
        dups1 = mx_strdup(s1);
        return dups1;
    } 
    if (s1 != NULL && s2 != NULL) {
        dups1 = mx_strdup(s1);
        dups2 = mx_strdup(s2);
        comb = mx_strcat(dups1, dups2);
        int last = mx_strlen(comb);
        comb[last] = '\0';
        return comb;
    }
    else
        return NULL;
}
// int main( ) {
//    char *str1= "this";
//    char *str2= "dodge ";
// //     char *str3= NULL;
     
//     printf("%s", mx_strjoin(str2, str1));
// }

