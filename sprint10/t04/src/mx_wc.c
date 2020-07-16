#include "minilibmx.h"

void mx_print_wcdata(int lines, int words, int bytes) {
    mx_printchar('\t');
    mx_printint(lines);
    mx_printchar('\t');
    mx_printint(words);
    mx_printchar('\t');
    mx_printint(bytes);
}
void mx_error_open(char *v) {
    mx_printerr("mx_wc: ");
    mx_printerr(v);
    mx_printerr(": open: No such file or directory\n");
}
void mx_error_dir(char *v) {
    mx_printerr("mx_wc: ");
    mx_printerr(v);
    mx_printerr(": read: Is a directory\n");
}
void mx_print_userinput(void) {
    int flag = 0;
    int lines = 0, words = 0, bytes = 0;
    char buff;

    while (read(0, &buff, sizeof(buff) > 0)) {
        bytes++;
        if (mx_isspace(buff))
            flag = 0;
        else if (flag == 0) {
            words++;
            flag = 1;
        }
        if (buff == '\n')
            lines++;
    }
    mx_print_wcdata(lines, words, bytes);
    mx_printchar('\n');
}

int main(int argc, char **argv) {
    if (argc == 1) {
        mx_print_userinput();
        exit(0);
        return 0;
    }
    int total_l = 0, total_w = 0, total_b = 0;
    
    for (int i = 1; i < argc; i++) {
        int flag = 0;
        char buff;
        int lines = 0, words = 0, bytes = 0;
        int file = open(argv[i], O_RDONLY | O_DIRECTORY);
        
        if(file > 0) {
            mx_error_dir(argv[i]);
            close(file);
        }
        else {
            file = open(argv[i], O_RDONLY);
            if (file < 0) {
                mx_error_open(argv[i]);
            }
            else {
                while (read(file, &buff, sizeof(buff)) > 0) {
                    bytes++;
                    if (mx_isspace(buff))
                        flag = 0;
                    else if (flag == 0) {
                        words++;
                        flag = 1;
                    }
                    if (buff == '\n')
                        lines++;
                }
                close(file);
                mx_print_wcdata(lines, words, bytes);
                mx_printchar('\t');
                write(1, argv[i], mx_strlen(argv[i]));
                mx_printchar('\n');
            
                total_l += lines;
                total_w += words;
                total_b += bytes;
            }
        }
    }
    if (argc > 2) {
        mx_print_wcdata(total_l, total_w, total_b);
        write (1, "\ttotal", 6);
        mx_printchar('\n');
    }
	return 0;
}
