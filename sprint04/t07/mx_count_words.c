//#include <stdio.h>

int mx_count_words(const char *str, char delimiter) {
    int count = 0;
    int check = 0;
    for (int i = 0; str[i] != '\0'; i++) {      
        if (str[i] == delimiter && check){
            count++;
            check = 0;
        }
        else if (str[i] != delimiter)
            check = 1;
    }
    return count+1;
}

/*int main() {
    char str[] = "follow   * the white rabbit";
    char separ = ' ';
    printf("%d", mx_count_words(str, separ));
}
*/

