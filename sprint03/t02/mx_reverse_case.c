//#include <stdio.h>
#include <stdbool.h>
int mx_tolower(int c);
int mx_toupper(int c);
bool mx_islower(int c);
bool mx_isupper(int c);

void mx_reverse_case(char *s) { 
	while (*s) {
		if (mx_isupper(*s)) {
			*s = mx_tolower(*s);
		}
		
		else if (mx_islower(*s)) {
			*s = mx_toupper(*s);
		}
		s++;
	}
}

/*int main() {
	char str[] = "HeLLo Neo";
	mx_reverse_case(str);
	printf("%s",str);
}
*/
