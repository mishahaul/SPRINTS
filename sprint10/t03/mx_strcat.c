#include "file_to_str.h"


char *mx_strcat(char *s1, const char *s2) {
	char *stroka = s1;
	while (*s1 != '\0') {
		s1++;
	}

	while (*s2 != '\0') {
		*s1 = *s2;
		s1++;
		s2++;
	}
	*s1 = '\0';
	return stroka;
}

