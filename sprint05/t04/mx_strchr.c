//#include <stdio.h>

char *mx_strchr(const char *s, int c) {
	while (*s) {
		if (*s == c) 
			return (char *)s;
	s++;
	}
	return 0;
}

/*int main() {
	const char str[] = "mx_print_pname";
	int letter = '/';
	printf("%s", mx_strchr(&str[1], letter));
}*/



