char *mx_strchr(const char *s, int c);
int mx_strlen(const char *s);
void mx_printstr(const char *s);
void mx_printchar(char c);

int main(int argc, char **argv) {
    if (argc > 0) {
        char *res = argv[0];
        char *last_res = 0;
        while (res != 0) {
            last_res = res;
            res = mx_strchr(&last_res[1], '/');
                // if (mx_strchr(&res[1], '/') == 0){
        }            
        mx_printstr(&last_res[1]);
        mx_printchar('\n');
    }
    return 0; 
}






