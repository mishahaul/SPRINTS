#include <unistd.h>

void mx_printstr(const char *s);
void mx_strlen(const char *s);


void mx_is_positive(int i) {

	if (i > 0)
		mx_printstr("positive");
	else if (i<0)
		mx_printstr("negative");
	else 
		mx_printstr("zero");	
	
	write(1, "\n", 1); 
}
/*
int main() {
	mx_is_positive(0);
}
*/

