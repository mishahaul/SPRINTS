#include "mx_cat.h"

int main(int argc, char *argv[]) {
    if (argc == 1) {
        char buff;
        int input = read(0, &buff, sizeof(buff));
        
        while (input > 0) {
            mx_printchar(buff);
            input = read(0, &buff, sizeof(buff));
        }
        exit(1);
        return 0;
    }
    for (int i = 1; i < argc; i++) {
        int rd, file = open(argv[i], O_RDONLY | O_DIRECTORY);
        char buff[64];

        if(file > 0) {
            mx_printerr("mx_cat: ");
            mx_printerr(argv[i]);
            mx_printerr(": Is a directory");
            exit(1);
            return 0;
        }
        close(file);
        file = open(argv[i], O_RDONLY);
        if (file < 0) {
            mx_printerr("mx_cat: ");
            mx_printerr(argv[i]);
            mx_printerr(": ");
            mx_printerr(strerror(errno));
            mx_printerr("\n");
            exit(1);
            return 0;
        }
        rd = read(file, &buff, sizeof(buff));
        while (rd == 64) {
            write(1, buff, rd);
            rd = read(file, &buff, sizeof(buff));
        }
        write(1, buff, rd);
        close(file); 
    }	   
	return 0;
}
