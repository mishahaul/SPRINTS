#include "only_smiths.h"

int mx_strcmp(const char* s1, const char *s2) {
    int len = 0, len2 =0;
    while(s1[len]) {
        len++;
    }
    while (s2[len2]) {
        len2++;
    }
    int strlen = 0;
    if(len>len2) {
        strlen = len;
    } 
    else {
        strlen = len2;
    }
    for(int i = 0; i < strlen; i++) {
        if(s1[i] > s2[i]) {
            return 1;
        }
        else if(s1[i] < s2[i]) {
            return -1;
        }
    }
    return 0;
}

// int main() {
//     char a[] = "Helllo";
//     char b[] = "Heloww";
//     printf("%d", mx_strcmp(a,b));
// }


