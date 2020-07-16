#include "file_to_str.h"

int mx_strlen(const char *s) {
	int len = 0;
	while(s[len] != '\0') {
		len++;
	} 
	return len;
}



