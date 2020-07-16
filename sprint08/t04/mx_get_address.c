#include "get_address.h"

char *mx_get_address(void *p) {
    char *hex = mx_nbr_to_hex((unsigned long)p);
    char *res = mx_strnew(mx_strlen(hex) + 2);
    res[0] = '0';
    res[1] = 'x';
    res += 2;
    res = mx_strcpy(res, hex);
    res -= 2;
    free(hex);
	return res;
}

// int main(){
//     char *str = malloc(1);
   
//     printf("%p\n", str);
//     printf("%s\n", mx_get_address(str));
// }

