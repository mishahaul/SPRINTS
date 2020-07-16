#include "get_address.h"

int mx_strlen(const char *s) {
	int len = 0;
	while(s[len] != '\0') {
		len++;
	} 
	return len;
}
