//#include <stdio.h>
int mx_strncmp(const char *s1, const char *s2, int n) {
    for(int i = 0; i <n; i++) {
        if (s1[i] != s2[i]){
            return s1[i] - s2[i];               
        }
    }
    return 0;
}
/*int main() {
    char user[] = "unit codes";
    char sys[] = "unit code";
    printf("%d", mx_strncmp(user,sys, 10));  
}
*/

