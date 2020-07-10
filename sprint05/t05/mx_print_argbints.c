void mx_printchar (char c);
void mx_printint(int n);
int mx_atoi(const char *str);

int main(int argc, char **argv) {
    int n = 0;
    int res[32];
    for (int i = 1; i < argc; i++) {
        n = mx_atoi(argv[i]);
        for (int j = 31; j>=0; j--) {
            int k = n >> j;
            if (k & 1)
                res[j] = 1;
            else
                res[j] = 0; 
            mx_printint(res[j]);
        }
        mx_printchar('\n');
    }
    return 0;
}

