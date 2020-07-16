#include "nbr_to_hex.h"

char* mx_nbr_to_hex(unsigned long nbr){
    char *res = NULL;
    char *hex = NULL;
    int size = 0, temp = 0;
    unsigned long len = nbr;

    if(nbr == 0) return "0";
    while (len != 0){
        len /= 16;
        size++;
    }
    res = (char *)mx_strnew(size);
    int i = 0;
    while(nbr != 0){
        temp = nbr % 16;
        if(temp < 10){
            res[i] = temp + 48;
            i++;
        }
        else{
            res[i] = temp + 87;
            i++;
        }
        nbr /= 16;
    }
    hex = (char *)mx_strnew(size);
    for(int j = i-1, k=0; j >= 0; j--, k++){
        hex[k] = res[j];
    }

    return hex;
}

// int main(){
//    // printf("%s \n",mx_nbr_to_hex(52)); 
//     printf("%s",mx_nbr_to_hex(10011)); 
// }
