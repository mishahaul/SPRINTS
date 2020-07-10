//#include <stdio.h>
#include <stdbool.h>
bool mx_isspace(char c);
bool mx_isdigit(int c);
int mx_atoi(const char *str) {
    int sign = 1;
    int i = 0;
    int res = 0;
    while (mx_isspace(str[i])){
        i++;
    }
    if (str[i] == '+' && str[i + 1] != '+' && str[i +1] != '-') {
        i++;
        sign = 1;
    }
    if (str[i] == '-') {
       sign = -1;
       i++;
    }  
    for (; mx_isdigit(str[i]); i++) {   
        res *= 10; 
        res += str[i] - 48;
    }   
    return res*sign;    
}
/*int main() {
    char *space = "    -756";
    printf("%d", mx_atoi(space));
}*/

