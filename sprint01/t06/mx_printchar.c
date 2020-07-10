#include <unistd.h>


const char h[] = "hello world";
char c = h[6];

void mx_printchar(char c) {
	write(1, &c, 1);
}

