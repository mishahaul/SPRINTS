#include "read_file.h"

int main(int argc, char **argv) {    
    if (argc == 2) {
        int src = open(argv[1], O_RDONLY); 
        char buff[100]; 
        int rd = read(src, buff, 100);

        if (src > 0) {
            while (rd == 100) {
                write(1, buff, rd);
                rd = read(src, buff, 100);
            }
            write(1, buff, rd);
            close(src);
        }
        else {
            write (2, "error\n", 6);
        }
    }
    else if (argc == 1 || argc > 2) {
            write(2, "usage: ./read_file [file_path]\n", 31);
    }
    return 0;
}

