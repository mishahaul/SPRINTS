//#include <stdio.h>
char *mx_strncpy(char *dst, const char *src, int len) {
	for (int i = 0; i < len; i++ ) {
		if (src[i] != '\0') {
			dst[i] = src[i];
		}
		else
			dst[i] = '\0';
	}
	return dst;
	
	return 0;
}
/*int main() {
	char test[] = "I got to go home";
	char real[] = "Unit";
	int len = 8 ;
	printf("%s", mx_strncpy(test, real, len));
	
}
*/


