#include <stdbool.h>
int mx_atoi(const char *str);
void mx_printchar(char c);
void mx_printint(int n);

int main(int argc, char **argv) {
    int res = 0;
    for(int i = 1; i < argc; i++) {
        res += mx_atoi(argv[i]);
    }
    mx_printint(res);
    mx_printchar('\n');
    return 0;
}
